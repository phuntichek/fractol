/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprosacc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 16:40:18 by nprosacc          #+#    #+#             */
/*   Updated: 2019/03/13 16:40:20 by nprosacc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *list;

	list = NULL;
	if ((list = (t_list *)malloc(sizeof(*list))))
	{
		if (content)
		{
			if ((list->content = malloc(content_size)))
			{
				ft_memcpy(list->content, content, content_size);
				list->content_size = content_size;
			}
		}
		else
		{
			list->content = NULL;
			list->content_size = 0;
		}
		list->next = NULL;
	}
	return (list);
}
