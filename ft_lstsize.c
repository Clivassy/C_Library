/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbatoro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:43:24 by jbatoro           #+#    #+#             */
/*   Updated: 2021/12/04 18:23:39 by jbatoro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		nbElement;
	t_list	*ptr ; // on cree un * qui va parcourir la liste.
	
	ptr = lst; // ptr cible le debut de la liste.
	nbElement = 0;
	while (ptr) 
	{
		ptr = ptr->next; // apres chaque incre, le ptr va sur elem next
		nbElement++;
	}
	return(nbElement);
}
