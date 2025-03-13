/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakarape <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 14:40:28 by hakarape          #+#    #+#             */
/*   Updated: 2024/01/25 14:40:30 by hakarape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	ds;
	size_t	ss;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	if (dstsize <= ft_strlen(dst))
		return (ft_strlen(src) + dstsize);
	ds = ft_strlen(dst);
	ss = ft_strlen(src);
	while (src[i] && (dstsize - 1 > ds))
	{
		dst[ds] = src[i];
		i++;
		ds++;
		ss--;
	}
	dst[ds] = '\0';
	return (ft_strlen(dst) + ss);
}
/*#include <stdio.h>
int main()
{
    char src[] = "a,c,a,f,h";
    char dst[10]; 
    printf("%lu\n", strlcpy(dst, src, 6));
    printf("%zu\n", ft_strlcpy(dst, src, 6));
    return 0;
}*/
