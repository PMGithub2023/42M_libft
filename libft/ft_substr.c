/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmos-g <polmos-g@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 11:23:00 by polmos-g          #+#    #+#             */
/*   Updated: 2024/09/26 11:23:03 by polmos-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*s2;
	size_t	l;
	size_t	count;

	i = start;
	l = ft_strlen (s);
	if (len == 0 || start >= l)
		return (ft_strdup(""));
	else if (l - i <= len)
		count = l - i + 1;
	else
		count = len + 1;
	s2 = (char *)ft_calloc (count, sizeof (char));
	if (!s2)
		return (NULL);
	while (i < len + start && s[i++] != '\0')
		s2[i - start - 1] = s[i - 1];
	return (s2);
}
