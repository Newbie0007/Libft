/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tngwenya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 10:10:02 by tngwenya          #+#    #+#             */
/*   Updated: 2018/06/06 07:52:27 by tngwenya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ptr;
	int		x;

	x = 0;
	if (!s)
		return (NULL);
	ptr = (char*)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!ptr)
		return (NULL);
	while (s[x] != '\0')
	{
		ptr[x] = (*f)(x, s[x]);
		x++;
	}
	ptr[x] = '\0';
	return (ptr);
}
