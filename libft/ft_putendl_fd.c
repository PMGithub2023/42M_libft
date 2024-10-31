/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmos-g <polmos-g@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 09:13:30 by polmos-g          #+#    #+#             */
/*   Updated: 2024/10/07 09:13:31 by polmos-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"
#include <stdlib.h>
#include <fcntl.h>

void	ft_putendl_fd(char *s, int fd)
{
	write (fd, s, ft_strlen (s));
	write (fd, "\n", 1);
}
