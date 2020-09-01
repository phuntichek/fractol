/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschmele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 19:18:00 by rschmele          #+#    #+#             */
/*   Updated: 2019/04/02 19:18:02 by rschmele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractol.h"

int			main(int argc, char **argv)
{
	t_fr *fr;

	fr = malloc(sizeof(t_fr));
	fr->mouse = 0;
	ft_kostil(fr);
	ft_kostil2(argc, argv, fr);
	iterator(fr);
	mlx_hook(fr->win, 2, 0, key_press, fr);
	mlx_hook(fr->win, 3, 0, key_press2, fr);
	mlx_hook(fr->win, 4, 0, mouse_press, fr);
	mlx_hook(fr->win, 6, 0, mouse_move, fr);
	mlx_loop(fr->mlx);
	return (0);
}
