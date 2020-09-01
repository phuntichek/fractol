/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprosacc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 16:48:48 by nprosacc          #+#    #+#             */
/*   Updated: 2019/03/13 16:48:50 by nprosacc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t dstl;

	i = 0;
	dstl = ft_strlen(dst);
	while (dst[i])
		i++;
	j = 0;
	if (dstl + 1 > size)
		return (ft_strlen(src) + size);
	size = size - dstl - 1;
	while (src[j] && j < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (dstl + ft_strlen(src));
}
