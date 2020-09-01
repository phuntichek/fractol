/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprosacc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 16:52:06 by nprosacc          #+#    #+#             */
/*   Updated: 2019/03/13 16:52:08 by nprosacc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*new;
	int		i;
	int		len;
	char	*rnew;

	rnew = NULL;
	if (s)
	{
		i = 0;
		len = (int)ft_strlen(s) - 1;
		while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
			i++;
		if (i == len + 1)
			return (ft_strnew(0));
		while (s[len] == ' ' || s[len] == '\n' || s[len] == '\t')
			len--;
		if (!(new = (char *)malloc(sizeof(char) * (len - i) + 2)))
			return (NULL);
		rnew = new;
		while (i <= len)
			*new++ = s[i++];
		*new = '\0';
	}
	return (rnew);
}
