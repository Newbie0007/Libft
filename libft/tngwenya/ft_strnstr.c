/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tngwenya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 07:49:35 by tngwenya          #+#    #+#             */
/*   Updated: 2018/06/04 10:36:58 by tngwenya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t x;
	size_t y;

	if (*needle == '\0')
		return ((char*)haystack);
	y = 0;
	while (haystack[y] != '\0' && y < len)
	{
		x = 0;
		while (needle[x] != '\0' && y + x < len)
		{
			if (haystack[y + x] != needle[x])
				break ;
			x++;
		}
		if (needle[x] == '\0')
			return ((char*)haystack + y);
		y++;
	}
	return (NULL);
}
