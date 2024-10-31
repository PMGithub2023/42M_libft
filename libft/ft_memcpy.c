/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmos-g <polmos-g@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:51:06 by polmos-g          #+#    #+#             */
/*   Updated: 2024/09/17 13:51:09 by polmos-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*str;
	size_t	i;

	if (!src)
		return (dest);
	i = 0;
	str = (char *)dest;
	while (i < n)
	{
		str[i] = ((char *)src)[i];
		i++;
	}
	return ((void *)str);
}
