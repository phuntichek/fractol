/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprosacc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 16:49:27 by nprosacc          #+#    #+#             */
/*   Updated: 2019/03/13 16:49:29 by nprosacc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	mem_c(char const *s, char (*f)(char))
{
	int i;

	i = 0;
	while (*s)
		if (f(*s++))
			i++;
	return (i);
}

char		*ft_strmap(char const *s, char (*f)(char))
{
	char *new;
	char *rnew;

	if (s && f)
	{
		if (!(new = (char *)malloc(sizeof(char) * mem_c(s, f) + 1)))
			return (NULL);
		rnew = new;
		while (*s)
		{
			if ((*new = f(*s)))
				new++;
			s++;
		}
		*new = '\0';
		return (rnew);
	}
	return (NULL);
}
