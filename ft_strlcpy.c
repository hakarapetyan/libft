/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakarape <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 14:40:42 by hakarape          #+#    #+#             */
/*   Updated: 2024/01/25 14:40:44 by hakarape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srcsize;
	size_t	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	srcsize = ft_strlen(src);
	while (src[i] && i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (srcsize);
}
/*#include <string.h>
 #include <stdio.h>
 int main(){
	char src[] = "a,c,a,f,h";
	char dst[10] = "";
	printf("%lu\n",strlcpy(dst,src,6));
	printf("%zu\n",ft_strlcpy(dst,src,6));
 }*/
