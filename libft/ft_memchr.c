/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprosacc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 16:41:05 by nprosacc          #+#    #+#             */
/*   Updated: 2019/03/13 16:41:07 by nprosacc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	d;
	size_t			i;
	unsigned char	*ss;

	i = 0;
	d = (unsigned char)c;
	ss = (unsigned char *)s;
	if (n == 0)
		return (NULL);
	while (i < n)
	{
		if (ss[i] == d)
			return (ss + i);
		i++;
	}
	return (NULL);
}
