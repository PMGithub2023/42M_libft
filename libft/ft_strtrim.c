/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmolmos </var/spool/mail/pmolmos>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 07:36:50 by pmolmos           #+#    #+#             */
/*   Updated: 2024/09/27 07:36:57 by pmolmos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static int	ft_inistr(const char *s1, const char *eli)
{
	int	i;
	int	end;
	int	f;

	if (s1[0] != '\0')
	{
		i = 0;
		end = 0;
		while (s1[i] != '\0' && end == 0)
		{
			f = 0;
			while (s1[i] != eli[f] && eli[f] != '\0')
				f++;
			if (eli[f] == '\0')
				end = 1;
			else
				i++;
		}
	}
	else
		return (0);
	return (i);
}

static int	ft_endstr(const char *s1, const char *eli, int ini)
{
	int	r;
	int	end;
	int	f;

	if (s1[ini] != '\0')
	{
		r = ft_strlen (s1) - 1;
		end = 0;
		while (r >= ini)
		{
			f = 0;
			while (s1[r] != eli[f] && eli[f] != '\0')
				f++;
			if (eli[f] == '\0')
				return (r);
			r--;
		}
		if (end == 0)
			return (ft_strlen (s1) - 1);
	}
	else
		return (ini);
	return (r);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*s2;
	int		i;
	int		f;
	int		r;

	if (!s1 || set[0] == '\0')
		return (ft_strdup (s1));
	i = ft_inistr (s1, set);
	if (s1[0] == '\0' || s1[i] == '\0')
		s2 = (char *) ft_calloc (1, sizeof (char));
	else
	{
		r = ft_endstr (s1, set, i);
		s2 = (char *) ft_calloc ((r - i + 2), sizeof(char));
		if (!s2)
			return (NULL);
		f = i;
		while (f < (r + 1))
		{
			s2[f - i] = s1[f];
			f++;
		}
	}
	return (s2);
}
