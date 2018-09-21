/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tngwenya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 14:42:16 by tngwenya          #+#    #+#             */
/*   Updated: 2018/06/07 10:38:01 by tngwenya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t x;

	x = 0;
	while (x < n)
	{
		((unsigned char*)dst)[x] = ((unsigned char*)src)[x];
		if (((unsigned char*)dst)[x] == (unsigned char)c)
		{
			return ((void*)((unsigned char*)dst) + 1 + x);
		}
		x++;
	}
	return (NULL);
}
