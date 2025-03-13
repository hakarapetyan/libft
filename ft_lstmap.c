/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakarape <hakarape@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 12:10:11 by hakarape          #+#    #+#             */
/*   Updated: 2024/02/07 18:10:51 by hakarape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*current;
	t_list	*arr;

	current = 0;
	if (!lst)
		return (NULL);
	while (lst)
	{
		arr = ft_lstnew((*f)(lst -> content));
		if (!arr)
		{
			ft_lstclear(&arr, del);
			return (NULL);
		}
		ft_lstadd_back(&current, arr);
		lst = lst -> next;
	}
	return (current);
}
