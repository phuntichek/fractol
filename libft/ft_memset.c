/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprosacc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 16:42:21 by nprosacc          #+#    #+#             */
/*   Updated: 2019/03/13 16:42:23 by nprosacc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	sim;
	unsigned char	*res;

	if (!len)
		return (b);
	res = (unsigned char *)b;
	sim = (unsigned char)c;
	while (len)
	{
		*res = sim;
		res++;
		len--;
	}
	return (b);
}
