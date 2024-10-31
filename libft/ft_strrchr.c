/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmolmos </var/spool/mail/pmolmos>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 10:34:27 by pmolmos           #+#    #+#             */
/*   Updated: 2024/09/23 10:34:32 by pmolmos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*s2;
	int				l;
	unsigned int	k;

	if (!s)
		return (NULL);
	k = (unsigned int) c % 256;
	l = ft_strlen (s);
	s2 = (unsigned char *)s + l;
	while (*s2 != k && s2 > (unsigned char *) s)
		s2--;
	if (s2 == (unsigned char *) s && k != *s2)
		return (NULL);
	return ((char *)s2);
}
