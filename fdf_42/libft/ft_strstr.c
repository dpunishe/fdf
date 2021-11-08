/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpunishe <dpunishe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 18:18:19 by dpunishe          #+#    #+#             */
/*   Updated: 2021/11/07 18:18:26 by dpunishe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	char	*ss1;
	char	*ss2;
	int		i;
	int		j;

	ss1 = (char *)s1;
	ss2 = (char *)s2;
	if (*ss2 == '\0')
		return (ss1);
	i = 0;
	while (ss1[i] != '\0')
	{
		j = 0;
		while (ss2[j] == ss1[j + i])
		{
			if (ss2[j + 1] == '\0')
				return (ss1 + i);
			j++;
		}
		i++;
	}
	return (0);
}
