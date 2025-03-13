/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakarape <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 10:55:30 by hakarape          #+#    #+#             */
/*   Updated: 2024/02/05 10:55:32 by hakarape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;
	t_list	*last;

	current = *lst;
	if (!current)
	{
		*lst = new;
		return ;
	}
	if (*lst)
	{
		last = ft_lstlast(current);
		last -> next = new;
		last = new;
	}
}
