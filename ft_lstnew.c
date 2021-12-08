/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbatoro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 15:49:27 by jbatoro           #+#    #+#             */
/*   Updated: 2021/12/08 14:50:03 by jbatoro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
/*
typedef struct	s_list
{
	void	*content;
	struct	s_list	*next;
}			t_list
*/
int	ft_lstsize(t_list *lst)
{
	int		nb_element;
	
	nb_element = 0;
	if (lst)
	{
		while (lst)
		{
			lst = lst->next;
			nb_element++;
		}
	}
	return (nb_element);
}

t_list	*ft_lstnew(void *content)
{
	t_list	*element;

	element = malloc(sizeof(*element));
	if (!element)
		return (NULL);
	element->content = content;
	element->next = NULL;
	return (element);
}

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}

void	ft_print_list(t_list *lst)
{
	while (lst)
	{
		ft_putstr(lst->content);
		lst = lst->next;
	}
}

int main()
{
	t_list *lst;
	char str[] = "Julia";
	
	lst = ft_lstnew(str);
	ft_print_list(lst);
}
