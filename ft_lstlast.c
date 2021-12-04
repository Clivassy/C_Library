/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbatoro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 17:35:58 by jbatoro           #+#    #+#             */
/*   Updated: 2021/12/04 18:32:00 by jbatoro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
		if  (lst)
		{
			while (lst->next) // as lst point sur l element suivant
				lst = lst->next;
		}// on va sortir avant que lst ne pointe sur NULL.
		return (lst);
}
