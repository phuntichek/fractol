/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprosacc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 16:48:35 by nprosacc          #+#    #+#             */
/*   Updated: 2019/03/13 16:48:37 by nprosacc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	char	*rnew;
	size_t	i;

	rnew = NULL;
	if (s1 && s2)
	{
		i = ft_strlen(s1) + ft_strlen(s2);
		if (!(new = (char *)malloc(sizeof(char) * i + 1)))
			return (NULL);
		rnew = new;
		if (s1 && s2)
		{
			while (*s1)
				*new++ = *s1++;
			while (*s2)
				*new++ = *s2++;
			*new = '\0';
		}
	}
	return (rnew);
}
