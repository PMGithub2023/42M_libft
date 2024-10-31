/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmolmos </var/spool/mail/pmolmos>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 07:59:31 by pmolmos           #+#    #+#             */
/*   Updated: 2024/10/15 07:59:34 by pmolmos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst2;
	t_list	*n_node;
	t_list	*tmp;

	if (!lst || !f || !del)
		return (NULL);
	lst2 = NULL;
	while (lst != NULL)
	{
		tmp = f (lst->content);
		n_node = ft_lstnew (tmp);
		if (n_node == NULL)
		{
			del (tmp);
			ft_lstclear (&lst2, del);
			return (NULL);
		}
		ft_lstadd_back (&lst2, n_node);
		lst = lst->next;
	}
	return (lst2);
}
