/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprosacc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 16:50:50 by nprosacc          #+#    #+#             */
/*   Updated: 2019/03/13 16:50:52 by nprosacc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char *new;
	char *ret;

	if (!(new = (char *)malloc(sizeof(char) * size + 1)))
		return (NULL);
	ret = new;
	while (size--)
		*new++ = '\0';
	*new = '\0';
	return (ret);
}
