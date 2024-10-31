/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmolmos </var/spool/mail/pmolmos>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 10:32:35 by pmolmos           #+#    #+#             */
/*   Updated: 2024/09/23 10:32:45 by pmolmos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	unsigned char	*s2;
	unsigned int	k;

	k = c % 256;
	s2 = (unsigned char *)s;
	if (!s)
		return (NULL);
	while (*s2 != k && *s2 != '\0')
		s2++;
	if (*s2 == '\0' && k != '\0')
		return (NULL);
	return ((char *) s2);
}
