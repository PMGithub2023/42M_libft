/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmos-g <polmos-g@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 16:03:04 by polmos-g          #+#    #+#             */
/*   Updated: 2024/09/17 16:03:07 by polmos-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*str;
	size_t	i;

	if (!dest || !src)
		return (NULL);
	str = (char *)dest;
	if ((dest > src))
	{
		i = n;
		while (i > 0)
		{
			str[i - 1] = ((char *)src)[i - 1];
			i--;
		}
		return ((void *)str);
	}
	i = 0;
	while (i < n)
	{
		str[i] = ((char *)src)[i];
		i++;
	}
	return ((void *)str);
}
