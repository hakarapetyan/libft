/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakarape <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 13:13:24 by hakarape          #+#    #+#             */
/*   Updated: 2024/01/22 16:56:34 by hakarape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_bzero(void *b, size_t len)
{
	size_t	i;
	char	*temp;

	temp = (char *) b;
	i = 0;
	while (i < len)
	{
		temp[i] = '\0';
		i++;
	}
	return ((void *)temp);
}
/*#include <stdio.h>
int main(){
	char str[20];
	printf("%s",(char *)ft_bzero(str,5));
}*/