/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getcurlist.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprosacc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 16:36:40 by nprosacc          #+#    #+#             */
/*   Updated: 2019/03/13 16:36:43 by nprosacc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_getcurlist(t_list *list, int elem)
{
	while (list && elem--)
		list = list->next;
	if (elem)
		return (NULL);
	return (list);
}
