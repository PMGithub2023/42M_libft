/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmos-g <polmos-g@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 09:30:54 by polmos-g          #+#    #+#             */
/*   Updated: 2024/10/14 09:30:56 by polmos-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*lst2;
	t_list	*tmp;

	if (!lst || !*lst)
		return ;
	lst2 = *lst;
	while (lst2)
	{
		tmp = lst2->next;
		del (lst2->content);
		if (lst2)
			free (lst2);
		lst2 = tmp;
	}
	*lst = lst2;
}
