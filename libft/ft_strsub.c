/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprosacc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 16:51:53 by nprosacc          #+#    #+#             */
/*   Updated: 2019/03/13 16:51:55 by nprosacc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *new;

	if (!(new = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	if (s && len)
	{
		new[len] = '\0';
		while ((int)--len >= 0)
			*(new + len) = *(s + start + len);
	}
	return (new);
}
