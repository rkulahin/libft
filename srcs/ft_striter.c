/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkulahin <rkulahin@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 17:04:22 by rkulahin          #+#    #+#             */
/*   Updated: 2018/10/27 17:20:38 by rkulahin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	size_t i;

	i = 0;
	if (s)
	{
		while (i < ft_strlen(s))
		{
			(*f)(&s[i]);
			i++;
		}
	}
}