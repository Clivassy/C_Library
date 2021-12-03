/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbatoro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 15:49:27 by jbatoro           #+#    #+#             */
/*   Updated: 2021/12/03 17:59:02 by jbatoro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;
*/

t_list *ft_lstnew(void *content)
{
	t_list *element;

	element = malloc(sizeof(*element));
	if (!element)
		return (NULL);
	*element->content = content;
	*element->next = NULL;
	return (element);
}
