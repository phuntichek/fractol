/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprosacc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 16:41:36 by nprosacc          #+#    #+#             */
/*   Updated: 2019/03/13 16:41:38 by nprosacc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char			*str1;
	char			*str2;
	unsigned long	i;

	str1 = (char *)dst;
	str2 = (char *)src;
	i = n;
	while (n)
	{
		*str1 = *str2;
		str1++;
		str2++;
		n--;
	}
	return (dst);
}
