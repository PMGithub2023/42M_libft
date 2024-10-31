/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmos-g <polmos-g@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 09:21:43 by polmos-g          #+#    #+#             */
/*   Updated: 2024/09/27 09:21:50 by polmos-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

void	*ft_calloc(size_t nmem, size_t size)
{
	char	*str;
	size_t	i;

	str = (char *) malloc (nmem * size);
	if (!str)
		return (NULL);
	i = 0;
	while (i < nmem * size)
		str[i++] = '\0';
	return ((void *)str);
}
