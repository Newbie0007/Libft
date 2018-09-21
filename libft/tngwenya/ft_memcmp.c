/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tngwenya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 16:01:36 by tngwenya          #+#    #+#             */
/*   Updated: 2018/06/04 08:18:11 by tngwenya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			x;
	unsigned char	*str1;
	unsigned char	*str2;

	x = 0;
	str1 = (unsigned char*)s1;
	str2 = (unsigned char*)s2;
	while (x < n)
	{
		if (str1[x] != str2[x])
		{
			return (str1[x] - str2[x]);
		}
		x++;
	}
	return (0);
}
