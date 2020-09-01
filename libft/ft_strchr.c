/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprosacc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 16:45:08 by nprosacc          #+#    #+#             */
/*   Updated: 2019/03/13 16:45:10 by nprosacc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char k;

	k = (char)c;
	while (*s)
	{
		if (*s == k)
			return ((char *)s);
		s++;
	}
	if (*s == k)
		return ((char *)s);
	return (NULL);
}
