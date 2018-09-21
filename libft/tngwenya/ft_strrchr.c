/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tngwenya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 10:37:48 by tngwenya          #+#    #+#             */
/*   Updated: 2018/05/28 16:54:23 by tngwenya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	int		x;

	x = 0;
	x = ft_strlen((char*)s);
	if (c == 0)
	{
		return ((char*)s + x);
	}
	while (*s && x >= 0)
	{
		if (s[x] == (char)c)
		{
			return ((char*)s + x);
		}
		x--;
	}
	return (NULL);
}
