/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprosacc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 16:41:20 by nprosacc          #+#    #+#             */
/*   Updated: 2019/03/13 16:41:22 by nprosacc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *ss1;
	unsigned char *ss2;

	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	if (!s1 && !s2)
		return (0);
	while ((*ss1 == *ss2) && --n)
	{
		ss1++;
		ss2++;
	}
	if (n == 0)
		return (0);
	return (*ss1 - *ss2);
}
