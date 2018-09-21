/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tngwenya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 10:21:02 by tngwenya          #+#    #+#             */
/*   Updated: 2018/05/31 11:05:14 by tngwenya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t x;

	x = 0;
	while ((s1[x] != '\0' || s2[x] != '\0') && (x < n))
	{
		if (s1[x] < s2[x] || s1[x] > s2[x])
		{
			return (((unsigned char*)s1)[x] - ((unsigned char*)s2)[x]);
		}
		x++;
	}
	return (0);
}
