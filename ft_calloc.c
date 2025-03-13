/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakarape <hakarape@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 15:21:36 by hakarape          #+#    #+#             */
/*   Updated: 2024/02/08 11:40:38 by hakarape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;
	size_t	k;

	if (count != 0 && SIZE_MAX / count < size)
		return (NULL);
	k = count * size;
	str = malloc(k);
	if (str)
		ft_bzero(str, k);
	return (str);
	return (NULL);
}
