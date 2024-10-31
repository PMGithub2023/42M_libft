/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmos-g <polmos-g@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 10:57:55 by polmos-g          #+#    #+#             */
/*   Updated: 2024/09/24 10:58:01 by polmos-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	size_t			s;
	unsigned char	*a1;
	unsigned char	*a2;

	a1 = (unsigned char *) s1;
	a2 = (unsigned char *) s2;
	if (n == 0)
		return (0);
	i = 0;
	while (i < n && a1[i] == a2[i] && a1[i] != '\0' && a2[i] != '\0')
		i++;
	if (i == n)
		s = i - 1;
	else
		s = i;
	return (a1[s] - a2[s]);
}
