/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlenbtw.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprosacc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 16:49:13 by nprosacc          #+#    #+#             */
/*   Updated: 2019/03/13 16:49:15 by nprosacc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlenbtw(const char *s, char from, char end)
{
	size_t i;

	i = 0;
	while (*s != from && *s)
		s++;
	if (!*s)
		return (0);
	while (*s != end && *s)
	{
		s++;
		i++;
	}
	return (i);
}
