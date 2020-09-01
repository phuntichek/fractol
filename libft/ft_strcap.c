/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprosacc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 16:44:41 by nprosacc          #+#    #+#             */
/*   Updated: 2019/03/13 16:44:43 by nprosacc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcap(char *str)
{
	char *new;

	new = str;
	while (!ft_isalpha(str) && str)
		str++;
	*str = toupper(*str);
	while (*str)
	{
		*str = tolower(*str);
		str++;
	}
	return (new);
}
