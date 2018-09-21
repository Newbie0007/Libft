/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tngwenya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 11:36:46 by tngwenya          #+#    #+#             */
/*   Updated: 2018/06/14 17:11:33 by tngwenya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;
	t_list *first;

	first = NULL;
	if (lst)
	{
		new = (*f)(lst);
		first = new;
		while (lst->next)
		{
			new->next = (*f)(lst->next);
			new = new->next;
			lst = lst->next;
		}
	}
	return (first);
}
