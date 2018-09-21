/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tngwenya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 09:51:24 by tngwenya          #+#    #+#             */
/*   Updated: 2018/06/06 17:21:32 by tngwenya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnew(size_t size)
{
	char *ptr;

	ptr = (char*)malloc(sizeof(char) * size + 1);
	if (!ptr)
		return (NULL);
	while (size > 0)
	{
		ptr[size] = '\0';
		ft_bzero(ptr, size);
		size--;
	}
	return (ptr);
}
