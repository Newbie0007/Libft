/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tngwenya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 17:53:23 by tngwenya          #+#    #+#             */
/*   Updated: 2018/06/14 11:14:23 by tngwenya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list *new;

	new = (t_list *)malloc(sizeof(t_list) + 1);
	if (new == NULL)
		return (NULL);
	if (content != NULL)
	{
		new->content = malloc(sizeof(void) * content_size);
		new->content = ft_memmove(new->content, (void*)content, content_size);
		new->content_size = content_size;
	}
	new->next = NULL;
	return (new);
	free(new);
}
