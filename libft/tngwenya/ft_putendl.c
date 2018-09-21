/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tngwenya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 10:17:46 by tngwenya          #+#    #+#             */
/*   Updated: 2018/06/06 08:01:47 by tngwenya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putendl(char const *s)
{
	int x;

	x = 0;
	if (!s)
		return ;
	while (s[x] != '\0')
	{
		write(1, &s[x], 1);
		x++;
	}
	write(1, "\n", 1);
}