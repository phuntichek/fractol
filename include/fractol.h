/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschmele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 19:18:11 by rschmele          #+#    #+#             */
/*   Updated: 2019/04/02 19:18:13 by rschmele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H
# define SIZE 1000

# include "../libft/libft.h"
# include <unistd.h>
# include <mlx.h>
# include <fcntl.h>
# include <stdlib.h>
# include <math.h>
# include <stdio.h>

typedef struct		s_fr
{
	void			*mlx;
	void			*win;
	void			*img;
	int				q;
	int				*img_ptr;
	double			zoom;
	double			x1;
	double			y1;
	double			cr;
	double			ci;
	int				it;
	int				it_max;
	int				x;
	int				y;
	double			tmp;
	double			zr;
	double			zi;
	int				type;
	int				mouse;
}					t_fr;

int					key_press(int keycode, void *param);
int					mouse_press(int button, int x, int y, void *param);
int					mouse_move(int x, int y, void *param);
void				ft_kostil(t_fr *fr);
void				ft_kostil2(int argc, char **argv, t_fr *fr);
void				pix_mandelbrot(t_fr *fr);
void				pix_jullia(t_fr *fr);
void				pix_hameleon(t_fr *fr);
void				iterator(t_fr *fr);
int					key_press2(int keycode, void *param);
int					main(int argc, char **argv);
#endif
