/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbatoro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 20:16:53 by jbatoro           #+#    #+#             */
/*   Updated: 2021/12/03 14:28:11 by jbatoro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(const char *str, char c)
{
	int	i;
	int	wrd_count;

	wrd_count = 0;
	i = 0;
	while (*str)
	{
		if (*str != c && i == 0)
		{
			i = 1;
			wrd_count++;
		}
		else if (*str == c)
			i = 0;
		str++;
	}
	return (wrd_count);
}

char	*ft_malloc_word(const char *str, int start, int end)
{
	char	*malloc_w;
	int		i;
	int		len;

	i = 0;
	len = (end - start) + 1;
	malloc_w = (char *)malloc(sizeof(char) * len);
	if (!malloc_w)
		return (0);
	while (start < end)
	{
		malloc_w[i] = str[start];
		i++;
		start++;
	}
	malloc_w[i] = '\0';
	return (malloc_w);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**array;

	if (!s)
		return (NULL);
	array = malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen(s))
	{
		if ((s[i] != c) && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			array[j] = ft_malloc_word(s, index, i);
			index = -1;
			j++;
		}
		i++;
	}
	array[j] = 0;
	return (array);
}
