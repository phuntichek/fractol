/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   drow_mandenbrot.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschmele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 19:40:45 by rschmele          #+#    #+#             */
/*   Updated: 2019/04/16 19:40:48 by rschmele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractol.h"

int			key_press(int keycode, void *param)
{
	t_fr *fr;

	fr = (t_fr*)param;
	(keycode == 53) ? exit(EXIT_SUCCESS) : 1;
	if (keycode == 18)
	{
		fr->type = 1;
		fr->zoom = 300;
		iterator(fr);
	}
	if (keycode == 19)
	{
		fr->type = 2;
		fr->zoom = 300;
		iterator(fr);
	}
	if (keycode == 20)
	{
		fr->type = 3;
		fr->zoom = 300;
		iterator(fr);
	}
	return (0);
}

int			mouse_press(int button, int x, int y, void *param)
{
	t_fr *fr;

	fr = (t_fr*)param;
	if (button == 4)
	{
		fr->x1 = (x / fr->zoom + fr->x1) - (x / (fr->zoom * 1.3));
		fr->y1 = (y / fr->zoom + fr->y1) - (y / (fr->zoom * 1.3));
		fr->zoom *= 1.3;
		iterator(fr);
	}
	if (button == 5)
	{
		fr->x1 = (x / fr->zoom + fr->x1) - (x / (fr->zoom * 0.8));
		fr->y1 = (y / fr->zoom + fr->y1) - (y / (fr->zoom * 0.8));
		fr->zoom *= 0.8;
		iterator(fr);
	}
	return (0);
}

int			mouse_move(int x, int y, void *param)
{
	t_fr *fr;

	fr = (t_fr *)param;
	if (fr->mouse)
	{
		fr->cr = x * 2;
		fr->ci = y * 2 - 800;
		iterator(fr);
	}
	return (0);
}

void		ft_kostil(t_fr *fr)
{
	fr->mlx = mlx_init();
	fr->win = mlx_new_window(fr->mlx, SIZE, SIZE, "fractol");
	fr->img = mlx_new_image(fr->mlx, SIZE, SIZE);
	fr->q = 0;
	fr->img_ptr = (int *)mlx_get_data_addr(fr->img, &fr->q, &fr->q, &fr->q);
	fr->zoom = 300;
	fr->x1 = -2.05;
	fr->y1 = -1.3;
	fr->it = 0;
	fr->it_max = 50;
	fr->x = 0;
	fr->y = 0;
}

void		ft_kostil2(int argc, char **argv, t_fr *fr)
{
	if (argc != 2 || (strcmp("Julia", argv[1]) != 0 &&
	strcmp("Mandelbrot", argv[1]) != 0 &&
	strcmp("Hameleon", argv[1]) != 0))
	{
		write(1, "Julia\nMandelbrot\nHameleon\n", 26);
		exit(EXIT_SUCCESS);
	}
	else
	{
		if (strcmp("Julia", argv[1]) == 0)
		{
			fr->type = 1;
			fr->mouse = 1;
		}
		else if (strcmp("Mandelbrot", argv[1]) == 0)
			fr->type = 2;
		else
			fr->type = 3;
	}
}
