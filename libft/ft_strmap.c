/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elfetoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 21:22:26 by elfetoua          #+#    #+#             */
/*   Updated: 2019/04/14 21:22:28 by elfetoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*f_s;
	int		i;

	if (!s || !f)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
		i++;
	if (!(f_s = (char *)malloc((i + 1) * sizeof(char))))
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		f_s[i] = f(s[i]);
		i++;
	}
	f_s[i] = '\0';
	return (f_s);
}
