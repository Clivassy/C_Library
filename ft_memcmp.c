/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbatoro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:22:43 by jbatoro           #+#    #+#             */
/*   Updated: 2021/11/27 16:43:23 by jbatoro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	const char	*string;
	const char	*string2;

	string = (const char *)s1;
	string2 = (const char *)s2;
	i = 0;
	while (i < n)
	{
		if (string[i] != string2[i])
			return (string[i] - string2[i]);
		i++;
	}
	return (0);
}
