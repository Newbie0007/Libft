/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tngwenya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 09:49:59 by tngwenya          #+#    #+#             */
/*   Updated: 2018/06/07 10:24:24 by tngwenya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	int		x;
	char	*ptr;

	x = 0;
	if (!s1 || !s2)
		return (NULL);
	ptr = (char*)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (ptr == NULL)
		return (NULL);
	while (*s1)
	{
		ptr[x++] = *s1++;
	}
	while (*s2)
	{
		ptr[x++] = *s2++;
	}
	ptr[x] = '\0';
	return (ptr);
}
