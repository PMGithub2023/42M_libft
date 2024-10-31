/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmos-g <polmos-g@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 12:41:34 by polmos-g          #+#    #+#             */
/*   Updated: 2024/10/10 12:41:37 by polmos-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*list1;

	list1 = (t_list *) malloc (1 * sizeof (t_list));
	if (!list1)
		return (NULL);
	list1->content = content;
	list1->next = NULL;
	return (list1);
}
