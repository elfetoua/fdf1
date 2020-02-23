/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elfetoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 18:09:15 by elfetoua          #+#    #+#             */
/*   Updated: 2020/02/22 18:11:09 by elfetoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_H
# define VECTOR_H

typedef struct	s_ivec2	t_ivec2;
typedef struct	s_fvec2	t_fvec2;

struct	s_ivec2
{
	int		x;
	int		y;
};
struct	s_fvec2
{
	double	x;
	double	y;
};
#endif
