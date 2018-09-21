/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tngwenya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 15:08:21 by tngwenya          #+#    #+#             */
/*   Updated: 2018/05/31 11:02:51 by tngwenya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strcmp(const char *s1, const char *s2)
{
	int x;

	x = 0;
	while (s1[x] != '\0' || s2[x] != '\0')
	{
		if (s1[x] < s2[x] || s1[x] > s2[x])
		{
			return (((unsigned char*)s1)[x] - ((unsigned char*)s2)[x]);
		}
		x++;
	}
	return (0);
}
