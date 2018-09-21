/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tngwenya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 10:12:53 by tngwenya          #+#    #+#             */
/*   Updated: 2018/05/31 13:54:46 by tngwenya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int		x;

	x = 0;
	if ((ptr = (char*)malloc(sizeof(char) * ft_strlen(s1) + 1)) == NULL)
	{
		return (NULL);
	}
	while (s1[x])
	{
		ptr[x] = s1[x];
		x++;
	}
	ptr[x] = '\0';
	return (ptr);
	free(ptr);
}
