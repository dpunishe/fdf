/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpunishe <dpunishe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 18:19:41 by dpunishe          #+#    #+#             */
/*   Updated: 2021/11/07 18:19:42 by dpunishe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strncpy(char *s2, const char *s1, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] != '\0')
	{
		s2[i] = s1[i];
		i++;
	}
	while (i < n)
	{
		s2[i] = '\0';
		i++;
	}
	return (s2);
}
