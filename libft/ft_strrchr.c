/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprosacc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 16:51:13 by nprosacc          #+#    #+#             */
/*   Updated: 2019/03/13 16:51:17 by nprosacc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *save;
	char d;

	save = NULL;
	while ((d = *s))
	{
		if (d == c)
			save = (char *)s;
		s++;
	}
	if (d == c)
		return ((char *)s);
	return (save);
}
