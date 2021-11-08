/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpunishe <dpunishe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 18:19:56 by dpunishe          #+#    #+#             */
/*   Updated: 2021/11/07 18:19:57 by dpunishe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strncat(char *s2, const char *s1, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s2[i] != '\0')
		i++;
	j = 0;
	while (s1[j] != '\0' && j < n)
	{
		s2[i + j] = s1[j];
		j++;
	}
	s2[i + j] = '\0';
	return (s2);
}
