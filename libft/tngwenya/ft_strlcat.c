/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tngwenya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 10:55:19 by tngwenya          #+#    #+#             */
/*   Updated: 2018/06/01 16:36:45 by tngwenya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t destlen;
	size_t srclen;
	size_t i;

	destlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstsize <= destlen)
	{
		return (srclen + dstsize);
	}
	i = 0;
	while (dst[i] != '\0' && i < (dstsize - 1))
	{
		i++;
	}
	while (*src != '\0' && i < (dstsize - 1))
	{
		dst[i] = *src++;
		i++;
	}
	dst[i] = '\0';
	return (destlen + srclen);
}
