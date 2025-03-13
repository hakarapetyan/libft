/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakarape <hakarape@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:31:40 by hakarape          #+#    #+#             */
/*   Updated: 2024/02/07 19:15:49 by hakarape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbr(const char *str)
{
	int	i;
	int	n;

	n = 0;
	i = 0;
	while ((str[i] >= '0' && str[i] <= '9') && str[i])
	{
		n = n * 10 + (str[i] - '0');
		i++;
	}
	return (n);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	count;

	sign = 1;
	i = 0;
	count = 0;
	while (((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign = -1;
			count++;
		}
		else if (str[i] == '+')
			count++;
		i++;
	}
	if (count > 1)
		return (0);
	return (ft_nbr(&str[i]) * sign);
}
/*#include <stdio.h>
#include <string.h>
int main(){
	char str[] = "efe-++587kjh";
	printf("%d\n",ft_atoi(str));
	printf("%d\n",atoi(str));
}*/