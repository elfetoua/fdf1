/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transform.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elfetoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 04:51:10 by elfetoua          #+#    #+#             */
/*   Updated: 2020/02/23 16:00:01 by elfetoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_transform(t_point *p, t_env *env)
{
	t_point previous;

	if (env->transf == 2)
	{
		previous = *p;
	  	p->x = (previous.x - previous.y) * cos(0.523599);
			p->y = -p->z + (previous.x + previous.y) * sin(0.523599);
		p->x = p->x * 20. + 300;
		p->y = p->y * 20. + 300;
	}
}
