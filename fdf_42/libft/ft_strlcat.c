/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpunishe <dpunishe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 18:20:22 by dpunishe          #+#    #+#             */
/*   Updated: 2021/11/07 18:20:23 by dpunishe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

size_t	ft_strlcat(char *s2, const char *s1, size_t n)
{
	size_t	len1;
	size_t	len2;
	size_t	i;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (n <= len2)
		return (len1 + n);
	i = 0;
	while ((s2[i] != '\0') && i < (n - 1))
		i++;
	while (*s1 && i < (n - 1))
	{
		s2[i] = *s1;
		i++;
		s1++;
	}
	s2[i] = '\0';
	return (len1 + len2);
}
