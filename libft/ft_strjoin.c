/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmos-g <polmos-g@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 14:04:59 by polmos-g          #+#    #+#             */
/*   Updated: 2024/09/26 14:05:04 by polmos-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*str;
	int		i;
	int		l1;
	int		l2;

	if (!s1 || !s2)
		return (NULL);
	l1 = ft_strlen (s1);
	l2 = ft_strlen (s2);
	str = (char *)malloc ((l1 + l2 + 1) * sizeof (char));
	if (!str)
		return (NULL);
	i = 0;
	while (i++ < l1)
		str[i - 1] = s1[i - 1];
	i--;
	while (i++ < (l1 + l2))
		str[i - 1] = s2[i - l1 - 1];
	str[i - 1] = '\0';
	return (str);
}
