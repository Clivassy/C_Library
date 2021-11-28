/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbatoro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:24:13 by jbatoro           #+#    #+#             */
/*   Updated: 2021/11/26 20:12:20 by jbatoro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
 {
 	int				src_size;
 	unsigned int	dest_size;
 	unsigned int	i;
 
 	i = 0;
 	src_size = 0;
 	dest_size = 0;
 	while (src[src_size])
 		src_size++;
 	if (size == 0)
 		return (src_size);
 	while (dest_size < size && dest[dest_size])
 		dest_size++;
 	if (size <= dest_size)
 		return (size + src_size);
 	i = 0;
 	while (src[i] && i < (size - dest_size - 1))
 	{
 		dest[dest_size + i] = src[i];
 		i++;
 	}
 	dest[dest_size + i] = '\0';
 	return (src_size + dest_size);
 }

