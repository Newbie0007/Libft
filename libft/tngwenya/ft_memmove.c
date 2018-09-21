/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tngwenya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 14:52:17 by tngwenya          #+#    #+#             */
/*   Updated: 2018/06/04 08:19:18 by tngwenya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	char *str1;
	char *str2;

	str1 = (char*)dst;
	str2 = (char*)src;
	if (str2 < str1)
	{
		while (len--)
		{
			str1[len] = str2[len];
		}
	}
	else
	{
		ft_memcpy(str1, str2, len);
	}
	return (str1);
}
