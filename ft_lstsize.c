/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbatoro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:43:24 by jbatoro           #+#    #+#             */
/*   Updated: 2021/12/05 16:15:14 by jbatoro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		nb_element;
	t_list	*ptr;

	ptr = lst;
	nb_element = 0;
	while (ptr)
	{
		ptr = ptr->next;
		nb_element++;
	}
	return (nb_element);
}
