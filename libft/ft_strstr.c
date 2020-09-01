/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprosacc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 16:51:41 by nprosacc          #+#    #+#             */
/*   Updated: 2019/03/13 16:51:43 by nprosacc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char		*ptr;
	const char	*nptr;

	nptr = needle;
	if (!*needle)
		return ((char *)haystack);
	while (*haystack)
	{
		if (*needle == *haystack)
		{
			ptr = (char *)haystack;
			while (*needle && *needle == *haystack)
			{
				needle++;
				haystack++;
			}
			if (!(*needle))
				return (ptr);
			haystack = ptr;
			needle = nptr;
		}
		haystack++;
	}
	return (NULL);
}
