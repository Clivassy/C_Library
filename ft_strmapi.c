/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbatoro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 19:58:25 by jbatoro           #+#    #+#             */
/*   Updated: 2021/12/02 14:41:05 by jbatoro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*string;
	unsigned int		i;
	int		len;

	if (!s)
		return (NULL);
	len = strlen(s);
	string = (char *)malloc(sizeof(char) * len + 1);
	if ((!string))
		return (NULL);
	i = 0;
	while (s[i])
	{
		string[i] = (*f)(i, s[i]);
		i++;
	}
	string[i] = '\0';
	return (string);
}

char 	*f(unsigned int plus, char c)
{
		c = c + plus;
		return (0);
}
/*
char ft_decalage(unsigned int i, char c)
{
    return ((char)i + c);
}

#include <stdio.h>
void ft_test_strmapi()
{
    char (*pf)(unsigned int, char) = &ft_decalage;
    char *s = "aabbcc";
    char *returned = ft_strmapi(s, &ft_decalage);
    char *expected = "abdegh";
    if (strncmp(returned, expected, 100))
    {
        printf("error with str : '%s', return '%s', expexted '%s'\n",s , returned, expected);
    }
}

int main()
{
	ft_test_strmapi();
}
*/