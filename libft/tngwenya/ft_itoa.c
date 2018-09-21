/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tngwenya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 14:26:06 by tngwenya          #+#    #+#             */
/*   Updated: 2018/06/12 13:05:53 by tngwenya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	char			*s;
	size_t			len;
	unsigned int	number;

	len = ft_numlen(n);
	number = n;
	if (n < 0)
	{
		number = -n;
		len++;
	}
	if (!(s = ft_strnew(len)))
		return (NULL);
	s[--len] = number % 10 + '0';
	while (number /= 10)
		s[--len] = number % 10 + '0';
	if (n < 0)
		s[0] = '-';
	return (s);
}
