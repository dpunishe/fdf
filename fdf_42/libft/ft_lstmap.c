/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpunishe <dpunishe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 18:24:05 by dpunishe          #+#    #+#             */
/*   Updated: 2021/11/07 18:24:06 by dpunishe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*nlst;
	t_list	*clst;

	nlst = f(lst);
	if (lst == NULL || f == NULL)
		return (NULL);
	clst = nlst;
	while (lst->next)
	{
		lst = lst->next;
		clst->next = f(lst);
		if (clst->next == NULL)
			return (NULL);
		clst = clst->next;
	}
	return (nlst);
}
