/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbatoro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 18:07:08 by jbatoro           #+#    #+#             */
/*   Updated: 2021/12/02 17:48:53 by jbatoro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s && (*s != (unsigned char)c))
		s++;
	if (*s == (unsigned char)c)
	{
		return ((char *)s);
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int iTest = 1;
int main(int ac, char **av)
{
	if (ac == 2)
	{
		char s[] = "tripouille";	
		printf("%s\n",ft_strchr(s, 't' + atoi(av[1])));
		write(1, "\n", 1);
		printf("%s\n", strchr(s, 't' + atoi(av[1])));
		return (0);
	}
}*/
