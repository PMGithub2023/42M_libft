/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmos-g <polmos-g@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:59:59 by polmos-g          #+#    #+#             */
/*   Updated: 2024/10/07 12:00:01 by polmos-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

static char	*ft_itoatmp(int n)
{
	char	nu2[12];
	int		i;
	int		neg;

	i = 0;
	neg = 0;
	if (n < 0)
	{
		neg = 1;
		n *= -1;
	}
	while (n > 9)
	{
		nu2[i] = n % 10 + 48;
		n /= 10;
		i++;
	}
	nu2[i++] = n + '0';
	if (neg == 1)
		nu2[i++] = '-';
	nu2[i] = '\0';
	return (ft_strdup (nu2));
}

static void	ft_revers(char *s1)
{
	int		i;
	int		len;
	char	tmp;

	len = ft_strlen (s1);
	i = 0;
	while (len > 1 && i < len / 2)
	{
		tmp = s1[i];
		s1[i] = s1[len - 1 - i];
		s1[len - 1 - i] = tmp;
		i++;
	}
}

char	*ft_itoa(int n)
{
	char	*num;

	if (n == -2147483648)
		return (ft_strdup ("-2147483648"));
	else if (n == 0)
		return (ft_strdup ("0"));
	num = ft_itoatmp (n);
	if (!num)
		return (NULL);
	ft_revers (num);
	return (num);
}
