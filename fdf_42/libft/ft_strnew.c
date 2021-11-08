/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpunishe <dpunishe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 18:19:27 by dpunishe          #+#    #+#             */
/*   Updated: 2021/11/07 18:19:30 by dpunishe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strnew(size_t size)
{
	char	*ss;

	ss = (char *)malloc(sizeof(char) * size + 1);
	if (ss == NULL)
		return (NULL);
	ft_bzero(ss, size + 1);
	return (ss);
}
