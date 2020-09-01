/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprosacc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 16:39:12 by nprosacc          #+#    #+#             */
/*   Updated: 2019/03/13 16:39:15 by nprosacc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *list;

	list = NULL;
	if (alst && *alst)
	{
		list = *alst;
		while (list)
		{
			list = (*alst)->next;
			del((*alst)->content, (*alst)->content_size);
			(*alst)->next = NULL;
			free(*alst);
			*alst = list;
		}
		*alst = NULL;
	}
}
