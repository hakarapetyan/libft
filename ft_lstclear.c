/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakarape <hakarape@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 12:09:59 by hakarape          #+#    #+#             */
/*   Updated: 2024/02/07 17:01:25 by hakarape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;
	t_list	*ncurrent;

	if (!lst || !del)
		return ;
	current = *lst;
	while (current)
	{
		ncurrent = current -> next;
		del(current -> content);
		free(current);
		current = ncurrent;
	}
	*lst = NULL;
}
