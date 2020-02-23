/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elfetoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 02:40:10 by elfetoua          #+#    #+#             */
/*   Updated: 2020/02/23 05:48:23 by elfetoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_draw_map(t_map *map, t_env *env)
{
	t_point	p1;
	t_point	p2;
	int		i;

	i = 0;
	env->transf = 2;
	while (i < map->size)
	{
		p1 = map->content[i];
		printf("%f\t%f\n", p1.x, p1.y);
		ft_transform(&p1, env);
		if ((i + 1) % map->cols)
		{
			p2 = map->content[i + 1];
			ft_transform(&p2, env);	
			drawline(env, p1, p2);
		}
		if ((i + map->cols) < map->size)
		{
			p2 = map->content[i + map->cols];
			ft_transform(&p2, env);
			drawline(env, p1, p2);
		}
		i++;
	}
}
