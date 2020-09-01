/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprosacc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 16:40:49 by nprosacc          #+#    #+#             */
/*   Updated: 2019/03/13 16:40:51 by nprosacc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	unsigned char	d;

	d = (unsigned char)c;
	str1 = (unsigned char *)dst;
	str2 = (unsigned char *)src;
	while (n)
	{
		if (*str2 == d)
		{
			*str1 = *str2;
			break ;
		}
		*str1 = *str2;
		str1++;
		str2++;
		n--;
	}
	if (n != 0)
		return (str1 + 1);
	return (NULL);
}
