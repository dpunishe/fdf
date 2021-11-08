/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpunishe <dpunishe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 18:20:01 by dpunishe          #+#    #+#             */
/*   Updated: 2021/11/07 18:20:04 by dpunishe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*fsh;

	if (s == NULL || f == NULL)
		return (NULL);
	fsh = (char *)malloc(ft_strlen(s) + 1);
	if (fsh == NULL)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		fsh[i] = f(i, s[i]);
		i++;
	}
	fsh[i] = '\0';
	return (fsh);
}
