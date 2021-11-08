/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpunishe <dpunishe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 18:24:27 by dpunishe          #+#    #+#             */
/*   Updated: 2021/11/07 18:25:00 by dpunishe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

static int	ft_isnegative(int nb)
{
	if (nb < 0)
		return (1);
	return (0);
}

char	*ft_itoa(int n)
{
	char	*ss;
	int		neg;
	int		len;
	int		g;

	g = n;
	len = 1;
	neg = ft_isnegative(n);
	g /= 10;
	while (g)
		len++;
	ss = ft_strnew(len + neg);
	if (ss == NULL)
		return (NULL);
	while (len--)
	{
		if (neg)
			ss[len + neg] = -(n % 10) + '0';
		else
			ss[len + neg] = (n % 10) + '0';
		n = n / 10;
	}
	if (neg)
		ss[0] = '-';
	return (ss);
}
