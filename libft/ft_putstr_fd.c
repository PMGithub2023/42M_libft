/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmos-g <polmos-g@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 09:12:56 by polmos-g          #+#    #+#             */
/*   Updated: 2024/10/07 09:12:59 by polmos-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"
#include <stdlib.h>
#include <fcntl.h>

void	ft_putstr_fd(char *s, int fd)
{
	write (fd, s, ft_strlen (s));
}
