/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elfetoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 16:52:13 by elfetoua          #+#    #+#             */
/*   Updated: 2020/02/23 05:39:28 by elfetoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# include "libft/libft.h"
# include <stdio.h>
# include "vector.h"
# include <mlx.h>
# include <math.h>
# define WHITE 0X00FFFFFF

typedef struct	s_map	t_map;
typedef struct	s_point	t_point;
typedef struct	s_img	t_img;
typedef struct	s_win	t_win;
typedef struct	s_env	t_env;

struct	s_map
{
	int		cols;
	int		rows;
	int		size;
	t_point	*content;
};

struct	s_point
{
	double	x;
	double	y;
	double	z;
	int		color;
};

struct	s_win
{
	void	*con_ptr;
	void	*win_ptr;
	t_ivec2	size;
	char	*title;
};

struct	s_img
{
	void	*con_ptr;
	void	*img_ptr;
	int		*pixels;
	int		bpp;
	int		size_line;
	int		endian;
	t_ivec2	size;
};

struct	s_env
{
	void	*con_ptr;
	t_win	*win;
	t_img	*img;
	int		transf;
};

void	ft_setup(t_env *env);
void	drawline(t_env *env, t_point p1, t_point p2);
void	ft_draw_map(t_map *map, t_env *env);
void    ft_transform(t_point *p, t_env *env);
#endif
