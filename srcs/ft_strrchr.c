/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkulahin <rkulahin@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 10:44:41 by rkulahin          #+#    #+#             */
/*   Updated: 2018/10/26 11:48:42 by rkulahin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	size_t	i;

	i = -1;
	ptr = NULL;
	while (*(s + ++i))
		if (ft_strchr(s + i, c) != NULL)
			ptr = ft_strchr(s + i, c);
	return (ptr);
}
