/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   drow_jullia.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschmele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 19:27:04 by rschmele          #+#    #+#             */
/*   Updated: 2019/04/16 19:27:06 by rschmele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractol.h"

void		pix_mandelbrot(t_fr *fr)
{
	fr->it = 0;
	fr->cr = fr->x / fr->zoom + fr->x1;
	fr->ci = fr->y / fr->zoom + fr->y1;
	fr->zr = 0;
	fr->zi = 0;
	while (fr->it < fr->it_max && fr->zi * fr->zi + fr->zr * fr->zr < 4.0)
	{
		fr->tmp = fr->zr * fr->zr - fr->zi * fr->zi + fr->cr;
		fr->zi = 2.0 * fr->zr * fr->zi + fr->ci;
		fr->zr = fr->tmp;
		fr->it++;
		if (fr->it == fr->it_max)
			*fr->img_ptr = 256000 * fr->it;
		else
			*fr->img_ptr = 265 * fr->it;
	}
}

void		pix_jullia(t_fr *fr)
{
	fr->it = 0;
	fr->zr = fr->x / fr->zoom + fr->x1;
	fr->zi = fr->y / fr->zoom + fr->y1;
	while (fr->it < fr->it_max && fr->zi * fr->zi + fr->zr * fr->zr < 4.0)
	{
		fr->tmp = fr->zr;
		fr->zr = fr->zr * fr->zr - fr->zi * fr->zi - 0.8 + (fr->cr / SIZE);
		fr->zi = 2.0 * fr->zi * fr->tmp + fr->ci / SIZE;
		fr->it++;
		if (fr->it == fr->it_max)
			*fr->img_ptr = 64000 * fr->it;
		else
			*fr->img_ptr = 2048 * fr->it;
	}
}

void		pix_hameleon(t_fr *fr)
{
	fr->it = 0;
	fr->zr = fr->x / fr->zoom + fr->x1;
	fr->zi = fr->y / fr->zoom + fr->y1;
	fr->cr = 0.29;
	fr->ci = 0.02;
	while (fr->it < fr->it_max && fr->zi * fr->zi + fr->zr * fr->zr < 4.0)
	{
		fr->tmp = fr->zr;
		fr->zr = fr->zr * fr->zr - fr->zi * fr->zi + fr->cr;
		fr->zi = -2.0 * fr->zi * fr->tmp + fr->ci;
		fr->it++;
		if (fr->it == fr->it_max)
			*fr->img_ptr = 50000 * fr->it;
		else
			*fr->img_ptr = 2600 * fr->it;
	}
}

void		iterator(t_fr *fr)
{
	int *iimg;

	fr->y = 0;
	fr->x = 0;
	iimg = fr->img_ptr;
	while (fr->y < SIZE)
	{
		fr->x = 0;
		while (fr->x < SIZE)
		{
			(fr->type == 1) ? pix_jullia(fr) : 1;
			(fr->type == 2) ? pix_mandelbrot(fr) : 1;
			(fr->type == 3) ? pix_hameleon(fr) : 1;
			fr->img_ptr++;
			fr->x++;
		}
		fr->y++;
	}
	fr->img_ptr = iimg;
	mlx_put_image_to_window(fr->mlx, fr->win, fr->img, 0, 0);
}

int			key_press2(int keycode, void *param)
{
	t_fr *fr;

	fr = (t_fr*)param;
	if (keycode == 126)
	{
		fr->y1 += 30 / fr->zoom;
		iterator(fr);
	}
	if (keycode == 125)
	{
		fr->y1 -= 30 / fr->zoom;
		iterator(fr);
	}
	if (keycode == 123)
	{
		fr->x1 += 30 / fr->zoom;
		iterator(fr);
	}
	if (keycode == 124)
	{
		fr->x1 -= 30 / fr->zoom;
		iterator(fr);
	}
	return (0);
}
