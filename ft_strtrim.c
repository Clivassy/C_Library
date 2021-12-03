/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbatoro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 20:08:51 by jbatoro           #+#    #+#             */
/*   Updated: 2021/12/03 14:31:33 by jbatoro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t			str_size;
	char			*new_string;

	if (!s1 || !set)
		return (NULL);
	/* trouver le premier emplacement valide ds la string.
	 cad l'emplacement qui n'est pas ds le set. */
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	/*trouver le dernier emplacement valide ds la string.*/
	str_size = ft_strlen(s1); /* get the len of the string*/
	while (str_size && ft_strchr(set, s1[str_size]))
		str_size--;
	/* j'alloue de i a str_size SOIT ce qui est valide.*/	
	new_string = ft_substr((char *)s1, 0, str_size + 1);
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
