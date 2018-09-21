/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tngwenya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 10:44:37 by tngwenya          #+#    #+#             */
/*   Updated: 2018/06/14 10:09:33 by tngwenya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	size_t i;
	size_t y;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i] == '\n' || s[i] == ' ' || s[i] == '\t')
		i++;
	if (!s[i])
		return (ft_strnew(1));
	y = ft_strlen(s) - 1;
	while (s[y] == '\n' || s[y] == ' ' || s[y] == '\t')
		y--;
	return (ft_strsub(s, i, y - i + 1));
}
