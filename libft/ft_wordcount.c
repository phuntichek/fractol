/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprosacc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 16:52:41 by nprosacc          #+#    #+#             */
/*   Updated: 2019/03/13 16:52:43 by nprosacc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_wordcount(const char *s, char sep)
{
	size_t i;

	i = 0;
	if (!s)
		return (0);
	while (*s)
	{
		while (*s == sep)
			s++;
		if (*s && *s != sep)
			i++;
		while (*s != sep && *s)
			s++;
	}
	return (i);
}
