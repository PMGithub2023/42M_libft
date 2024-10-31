/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmos-g <polmos-g@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 11:37:17 by polmos-g          #+#    #+#             */
/*   Updated: 2024/01/23 11:37:21 by polmos-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>
#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strnstr(const char *s0, const char *s1, size_t len)
{
	size_t	i;
	size_t	j;

	if (s1[0] == '\0')
		return ((char *)s0);
	i = 0;
	j = 0;
	while (i < len && s0[i] != '\0' && s1[j] != '\0')
	{
		while (s0[i] != s1[j] && s0[i] != '\0' && i < len)
			i++;
		while (s0[i] == s1[j++] && s0[i] != '\0' && i < len)
			i++;
		if (s1[j - 1] == '\0')
			return ((char *)s0 + (i - j + 1));
		else if (i < len && s0[i] != '\0')
		{
			i -= (j - 2);
			j = 0;
		}
	}
	return (NULL);
}
