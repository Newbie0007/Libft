/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tngwenya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 13:00:39 by tngwenya          #+#    #+#             */
/*   Updated: 2018/06/14 10:41:47 by tngwenya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *link;

	while (*alst)
	{
		del((*alst)->content, (*alst)->content_size);
		link = (*alst)->next;
		free(*alst);
		*alst = link;
	}
	*alst = NULL;
}
