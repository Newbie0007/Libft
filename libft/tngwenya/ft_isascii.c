/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tngwenya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 09:56:19 by tngwenya          #+#    #+#             */
/*   Updated: 2018/05/28 15:02:36 by tngwenya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_isascii(int c)
{
	unsigned char b;

	b = (unsigned char)c;
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}
