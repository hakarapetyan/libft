/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakarape <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 10:52:18 by hakarape          #+#    #+#             */
/*   Updated: 2024/02/05 10:52:20 by hakarape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned
int, char))
{
	int		i;
	int		j;
	char	*arr;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	arr = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (arr == NULL)
		return (NULL);
	while (s[i])
	{
		arr[j] = f(i, s[i]);
		i++;
		j++;
	}
	arr[j] = '\0';
	return (arr);
}
