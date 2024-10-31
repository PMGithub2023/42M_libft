/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmolmos </var/spool/mail/pmolmos>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 07:36:00 by pmolmos           #+#    #+#             */
/*   Updated: 2024/10/01 07:36:04 by pmolmos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

static int	ft_count(const char *s1, char c)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (s1[i] != '\0')
	{
		while (s1[i] == c && s1[i] != '\0')
			i++;
		if (s1[i] == '\0' && n == 0)
			return (0);
		while (s1[i] != c && s1[i] != '\0')
			i++;
		n++;
		while (s1[i] == c && s1[i] != '\0')
			i++;
	}
	return (n);
}

static void	ft_free(char **s, int n)
{
	int	i;

	i = n - 1;
	s[n] = NULL;
	while (i >= 0 && s[i] != NULL)
	{
		free (s[i]);
		s[i] = NULL;
		i--;
	}
}

static char	*ft_insplit(char **s0, char **s1, int c, int n)
{
	int	i;
	int	ini;

	i = 0;
	if (s1[0][i] == '\0')
		return (s0[n] = NULL);
	while (s1[0][i] == c && s1[0][i] != '\0')
		i++;
	ini = i;
	while (s1[0][i] != c && s1[0][i] != '\0')
		i++;
	s0[n] = ft_substr (*s1, ini, i - ini);
	if (!s0[n])
	{
		ft_free (s0, n);
		return (s0[0]);
	}
	while (s1[0][i] == c && s1[0][i] != '\0')
		i++;
	s1[0] = s1[0] + i;
	return (s0[n]);
}

char	**ft_split(const char *s, char c)
{
	char	**s2;
	char	*s1;
	int		i;
	int		n;

	s1 = (char *) s;
	n = ft_count (s1, c);
	s2 = ft_calloc ((n + 1), sizeof (char *));
	if (!s2)
		return (NULL);
	else if (n == 0)
		s2[0] = NULL;
	i = 0;
	while (i < n)
	{
		s2[i] = (ft_insplit (s2, &s1, c, i));
		if (s2[0] == NULL)
		{
			free (s2);
			s2 = NULL;
			return (NULL);
		}
		i++;
	}
	return (s2);
}
