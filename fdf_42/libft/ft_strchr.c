/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpunishe <dpunishe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 18:21:24 by dpunishe          #+#    #+#             */
/*   Updated: 2021/11/07 18:21:30 by dpunishe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*f;
	char	*ss;

	ss = (char *)s;
	i = 0;
	f = 0;
	while (ss[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (ss[i] == c)
			f = &ss[i];
		i--;
	}
	return (f);
}
