/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tngwenya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 10:05:56 by tngwenya          #+#    #+#             */
/*   Updated: 2018/06/06 07:26:20 by tngwenya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	char	*ptr;
	int		x;

	x = 0;
	if (!s)
		return (NULL);
	ptr = (char*)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (ptr == NULL)
		return (NULL);
	while (s[x] != '\0')
	{
		ptr[x] = (*f)(s[x]);
		x++;
	}
	ptr[x] = '\0';
	return (ptr);
}
