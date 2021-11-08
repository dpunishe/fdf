/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpunishe <dpunishe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 18:26:09 by dpunishe          #+#    #+#             */
/*   Updated: 2021/11/07 18:26:19 by dpunishe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int	ft_atoi(const char *str)
{
	long long int	n;
	long long int	res;

	n = 1;
	res = 0;
	while (*str == '\t' || *str == '\v' || *str == '\r'
		|| *str == '\n' || *str == ' ' || *str == '\f')
		str++;
	if (*str == '-')
	{
		n = -1;
		str++;
	}
	if (*str == '+' && n == 1)
		str++;
	while (*str && (*str >= '0' && *str <= '9'))
	{
		if (res > 9223372036854775807 && n == 1)
			return (-1);
		else if (res < -9223372036854775807 && n == -1)
			return (0);
		res = (res * 10) + *str - '0';
		str++;
	}
	return (res * n);
}
