/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkulahin <rkulahin@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 10:22:04 by rkulahin          #+#    #+#             */
/*   Updated: 2018/10/26 10:39:47 by rkulahin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	size_t i;

	i = 0;
	while (*(str + i))
	{
		if (*(str + i) == ch)
			return ((char *)str + i);
		else if (*(str + i + 1) == ch)
			return ((char *)str + i + 1);
		i++;
	}
	return (NULL);
}
