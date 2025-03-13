/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakarape <hakarape@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 12:55:24 by hakarape          #+#    #+#             */
/*   Updated: 2024/02/08 14:21:39 by hakarape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	need_len;

	if (*needle == '\0')
		return ((char *)haystack);
	if (haystack == NULL && len == 0)
		return (NULL);
	need_len = ft_strlen(needle);
	while (*haystack != '\0' && need_len <= len)
	{
		if (ft_strncmp(haystack, needle, need_len) == 0)
			return ((char *)haystack);
		len--;
		haystack++;
	}
	return (NULL);
}
/*int main()
{
	//const char haystack[] = "abcde";
	const char needle[] = "cde";
	const char empty[] = "";
	printf("%s", strnstr(empty,needle,-1));
	printf("%s", ft_strnstr(empty,needle,-1)); 
}*/