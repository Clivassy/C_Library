/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbatoro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:23:15 by jbatoro           #+#    #+#             */
/*   Updated: 2021/11/27 15:11:01 by jbatoro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <bsd/string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*to_find;
	char	*str;

	to_find = (char *)little;
	str = (char *)big;
	i = 0;
	if (!to_find[i])
		return (str);
	while (i < len)
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (to_find[j] && str[i + j] == to_find[j])
				j++;
			if (to_find[j] == 0)
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
