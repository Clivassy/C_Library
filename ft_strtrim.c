/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbatoro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 20:08:51 by jbatoro           #+#    #+#             */
/*   Updated: 2021/12/02 21:37:17 by jbatoro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char				*new_s;
	size_t				i;

	if (!s)
		return (NULL);
	new_s = (char *)malloc(sizeof(char) * len + 1);
	if (!new_s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		new_s[0] = '\0';
		return (new_s);
	}
	i = 0;
	while (s[i] && i < len)
		{
			new_s[i] = s[start];
			start++;
			i++;
		}
	new_s[i] = '\0';
	return (new_s);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t			str_size;
	char			*new_string;
	char			*string1;

	string1 = (char *)s1;
	//protection
	if (!s1 || !set)
		return (NULL);
	// trouver le premier emplacement valide ds la string.
	// cad l'emplacement qui n'est pas ds le set.
	while (*string1 && ft_strchr(set, *string1))
		s1++;
	if (*string1 == 0)
		return (string1);
	//trouver le dernier emplacement valide ds la string.
	str_size = ft_strlen(string1); // get the len of the string	
	while (str_size && ft_strchr(set, string1[str_size]))
		str_size--;
	// j'alloue de i a str_size SOIT ce qui est valide.	
	new_string = ft_substr((char *)s1, 0, str_size);
	return (new_string);
}
/*
#include <stdio.h>
int main()
{
	char const s1[] = "   xxx   xxx";
	char const set[] = " x";

	printf("%s\n", ft_strtrim(s1, set));
}*/
