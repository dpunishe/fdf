/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpunishe <dpunishe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 18:23:38 by dpunishe          #+#    #+#             */
/*   Updated: 2021/11/07 18:23:45 by dpunishe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memalloc(size_t size)
{
	void	*ss;

	ss = (void *)malloc(sizeof(void) * size);
	if (ss == NULL)
		return (NULL);
	ft_bzero(ss, size);
	return (ss);
}
