/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakarape <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 12:54:44 by hakarape          #+#    #+#             */
/*   Updated: 2024/02/01 12:54:50 by hakarape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_nb(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
	{
		count++;
	}
	n = -n;
	while (n)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

char	*ft_itoa(int l)
{
	char		*arr;
	int			k;
	int long	n;

	n = l;
	arr = (char *)malloc(sizeof(char) * (count_nb(n) + 1));
	if (arr == NULL)
		return (NULL);
	k = count_nb(n);
	if (n < 0)
	{
		arr[0] = '-';
		n = -n;
	}
	arr[k] = '\0';
	k--;
	if (n == 0)
		arr[0] = 0 + '0';
	while (n)
	{
		arr[k] = (n % 10) + '0';
		n = n / 10;
		k--;
	}
	return (arr);
}
/*int main()
{
    printf("%s\n",ft_itoa(0));
}*/
