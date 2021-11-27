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
#include <string.h>
#include <bsd/string.h> 

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (dst[i])
		i++; // i = dest size
	if (size < i)
	{
		while (src[j])
			j++;
		return (size + j);
	}
	while (size > 0 && i < size - 1 && src[j])
    {
        dst[i] = src[j];
        i++;
        j++;
    }
	dst[i] = '\0';
	while (src[j++])
        i++;
	return (i);
}

#include <stdio.h>
int main()
{
    char dst[100] = "1234";
    char src[100] = "ABCD";
    printf("%ld\n", ft_strlcat(dst, src, 6));
    printf("%ld\n", strlcat(dst, src, 6));
}
