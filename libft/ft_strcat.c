/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprosacc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 16:44:55 by nprosacc          #+#    #+#             */
/*   Updated: 2019/03/13 16:44:57 by nprosacc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	char *dst;

	dst = s1;
	while (*dst)
		dst++;
	while (*s2)
		*dst++ = *s2++;
	*dst = '\0';
	return (s1);
}
