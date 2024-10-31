/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmos-g <polmos-g@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:09:59 by polmos-g          #+#    #+#             */
/*   Updated: 2024/09/24 15:10:01 by polmos-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <bsd/string.h>
#include "libft.h"

static char	*ft_clearstr(const char *s1)
{
	char	*s2;
	int		i;

	if (!s1)
		return (NULL);
	s2 = (char *)s1;
	i = 0;
	while ((s2[i] == ' ' || s2[i] == '\t' || s2[i] == '\r' || s2[i] == '\v'
			|| s2[i] == '\f' || s2[i] == '\n') && s2[i] != '\0')
		i++;
	return (s2 + i);
}

static int	ft_checkstr(char *s1, int clase)
{
	int	i;

	i = 0;
	if (clase == 0)
	{
		while (ft_isdigit(s1[i]))
			i++;
		if (s1[i] == '\0' || i > 0)
			return (i);
	}
	else if (clase == 2)
	{
		while (s1[i] == '0' || s1[i] == '1')
			i++;
		if (s1[i] == '\0' || i > 0)
			return (i);
	}
	else if (clase == 8)
	{
	}
	return (0);
}

static int	ft_sign(char **s)
{
	char	*s2;

	s2 = *s;
	if (((s2[0]) == '+' && ft_isdigit (s2[1])))
	{
		*s = ++s2;
		return (1);
	}
	else if ((s2[0]) == '-' && ft_isdigit (s2[1]))
	{
		*s = ++s2;
		return (-1);
	}
	else if (ft_isdigit (s2[0]))
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	char	*s;
	int		n;
	int		len;
	int		i;
	int		sign;

	n = 0;
	s = ft_clearstr (nptr);
	sign = ft_sign (&s);
	len = ft_checkstr (s, 0);
	if (len > 0)
	{
		i = 0;
		while (i < len && ft_isdigit (s[i]))
		{
			n = n * 10 + (s[i] - 48);
			i++;
		}
	}
	else
		return (0);
	return (n * sign);
}
