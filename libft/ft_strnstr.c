/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprosacc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 16:51:03 by nprosacc          #+#    #+#             */
/*   Updated: 2019/03/13 16:51:04 by nprosacc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char		*ptr;
	const char	*nptr;
	int			i;

	nptr = needle;
	if (!*needle)
		return ((char *)haystack);
	while (*haystack && ((int)len-- + 1))
	{
		if (*needle == *haystack)
		{
			i = (int)len;
			ptr = (char *)haystack;
			while (*needle && *needle++ == *haystack++ && ((int)len-- + 1))
				if (!(*needle))
					return (ptr);
			haystack = ptr;
			len = (size_t)i;
			needle = nptr;
		}
		haystack++;
	}
	return (NULL);
}
