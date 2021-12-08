/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbatoro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 15:49:27 by jbatoro           #+#    #+#             */
/*   Updated: 2021/12/08 15:48:34 by jbatoro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
typedef struct	s_list
{
	void	*content;
	struct	s_list	*next;
}			t_list
*/

// Count elements of the list
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

// Create an element and assign it value of content
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

// Print strings
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

// Print numbers
void	ft_putchar(char *c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb >= 0 && nb <= 9)
	{
		nb = nb + 48;
		write(1, &nb, 1);
	}
	else if (nb < 0)
	{
		if (nb == -2147483648)
			write(1, "-2147483648", 11);
		else
		{
			write(1, "-", 1);
			nb = nb * (-1);
			ft_putnbr(nb);
			return ;
		}
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

/* Adding an element at beggining of the lis */
void	ft_lstadd_front(t_list **alst, t_list *new)
{	
	new->next = *alst;
	*alst = new;
}

/*Print the list */
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
// TEST lst_new // lst_size

//	t_list *Prenom;
	t_list **first;
	t_list *new_element;

	/*Prenom = ft_lstnew("Julia\n");
	ft_print_list(Prenom);

	int nb_elements;
	nb_elements = ft_lstsize(Prenom);
	ft_putnbr(nb_elements);*/

	
	ft_lstadd_front(first, new_element);
//	new_element = ft_lstnew("hello");

}
