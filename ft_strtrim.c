/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakarape <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 12:55:50 by hakarape          #+#    #+#             */
/*   Updated: 2025/03/13 18:05:30 by hakarape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	char	*arr;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	k = ft_strlen(set);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	j = ft_strlen(s1) - 1;
	while (j > i && ft_strchr(set, s1[j]))
		j--;
	k = 0;
	arr = (char *)malloc(sizeof(char) * ((j - i) + 2));
	if (arr == NULL)
		return (NULL);
	while (i <= j)
		arr[k++] = s1[i++];
	arr[k] = '\0';
	return (arr);
}
