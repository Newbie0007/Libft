/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tngwenya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 09:31:36 by tngwenya          #+#    #+#             */
/*   Updated: 2018/06/04 10:41:01 by tngwenya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *haystack, const char *needle)
{
	int x;
	int y;

	if (*needle == '\0')
		return ((char*)haystack);
	y = 0;
	while (haystack[y] != '\0')
	{
		x = 0;
		while (needle[x] != '\0')
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
