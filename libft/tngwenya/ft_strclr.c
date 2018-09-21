/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tngwenya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 09:58:35 by tngwenya          #+#    #+#             */
/*   Updated: 2018/06/05 17:43:09 by tngwenya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_strclr(char *s)
{
	int x;

	x = 0;
	if (s)
	{
		while (s[x] != '\0')
		{
			s[x] = '\0';
			x++;
		}
	}
}
