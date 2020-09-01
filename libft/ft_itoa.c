/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprosacc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 16:38:48 by nprosacc          #+#    #+#             */
/*   Updated: 2019/03/13 16:38:50 by nprosacc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static	int		mema(int n)
{
	int i;
	int ng;

	i = 1;
	ng = 0;
	if (n < 0)
	{
		ng = 1;
		n = -n;
	}
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	return (i + ng);
}

static	char	*str_init(char *str, int mem)
{
	*str = '!';
	while (mem > 0)
	{
		mem--;
		str++;
	}
	*str = '\0';
	return (str);
}

char			*ft_itoa(int n)
{
	char	*str;
	int		mem;
	int		g;

	mem = mema(n);
	if (n < 0)
	{
		g = 1;
		n = -n;
	}
	else
		g = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (!(str = ft_strnew(sizeof(char) * mem)))
		return (NULL);
	str = str_init(str, mem);
	while (*(--str) != '!')
	{
		*str = n % 10 + '0';
		n /= 10;
	}
	g ? (*str = '-') : \
				(*str = n + '0');
	return (str);
}
