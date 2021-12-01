/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbatoro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:29:12 by jbatoro           #+#    #+#             */
/*   Updated: 2021/12/01 20:07:47 by jbatoro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	char			*dst;
	char			*source;

	dst = (char *)dest;
	source = (char *)src;
	if (!dst || !src)
		return (NULL);
	if (dst > source)
	{
		while (n > 0)
		{
			dst[n - 1] = source[n - 1];
			n--;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			dst[i] = source[i];
			i++;
		}
	}
	return (dst);
}
