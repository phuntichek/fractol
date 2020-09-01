/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprosacc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 16:47:20 by nprosacc          #+#    #+#             */
/*   Updated: 2019/03/13 16:47:25 by nprosacc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		lenght;
	char	*str;

	lenght = ft_strlen((char *)s1);
	if (!(str = malloc(sizeof(char) * lenght + 1)))
		return (NULL);
	while (*s1)
	{
		*str = *s1;
		str++;
		s1++;
	}
	*str = '\0';
	return (str - lenght);
}
