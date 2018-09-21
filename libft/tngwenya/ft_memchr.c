/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tngwenya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 15:48:07 by tngwenya          #+#    #+#             */
/*   Updated: 2018/05/28 14:55:34 by tngwenya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memchr(const void *s, int c, size_t n)
{
	size_t			x;
	unsigned char	*ptr;

	x = 0;
	ptr = (unsigned char*)s;
	while (n > x)
	{
		if (ptr[x] == (unsigned char)c)
		{
			return (&ptr[x]);
		}
		x++;
	}
	return (NULL);
}
