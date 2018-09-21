/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tngwenya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 10:23:00 by tngwenya          #+#    #+#             */
/*   Updated: 2018/06/06 08:04:09 by tngwenya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putstr_fd(char const *s, int fd)
{
	int x;

	x = 0;
	if (!s)
		return ;
	while (s[x] != '\0')
	{
		write(fd, &s[x], 1);
		x++;
	}
}