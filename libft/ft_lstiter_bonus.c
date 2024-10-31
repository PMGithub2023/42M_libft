/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmolmos </var/spool/mail/pmolmos>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 20:01:19 by pmolmos           #+#    #+#             */
/*   Updated: 2024/10/10 20:01:23 by pmolmos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*nodo;

	if (!lst || !f)
		return ;
	nodo = lst;
	while (nodo)
	{
		f (nodo->content);
		nodo = nodo->next;
	}
}
