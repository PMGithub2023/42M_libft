/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmos-g <polmos-g@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:53:49 by polmos-g          #+#    #+#             */
/*   Updated: 2024/09/24 11:53:56 by polmos-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned int	k;

	i = 0;
	k = (unsigned int) c % 256;
	s1 = (unsigned char *) s;
	while (i < n && s1[i] != k)
		i++;
	if (i == n)
		return (NULL);
	return ((void *)(s1 += i));
}
