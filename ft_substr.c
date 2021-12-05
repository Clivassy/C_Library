/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbatoro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 20:08:00 by jbatoro           #+#    #+#             */
/*   Updated: 2021/12/05 16:15:52 by jbatoro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char				*new_s;
	size_t				i;
	unsigned int		s_size;

	if (!s)
		return (NULL);
	s_size = ft_strlen(s);
	if (s_size < start)
	{
		new_s = malloc(sizeof(char) * 1);
		if (!new_s)
			return (NULL);
		new_s[0] = '\0';
		return (new_s);
	}
	i = ft_strlen(s + start);
	if (i < len)
		len = i;
	new_s = (char *)malloc(sizeof(char) * len + 1);
	if (!new_s)
		return (NULL);
	ft_strlcpy(new_s, s + start, len + 1);
	return (new_s);
}
