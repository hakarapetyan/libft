/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakarape <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 13:46:39 by hakarape          #+#    #+#             */
/*   Updated: 2024/01/19 14:27:59 by hakarape         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c < 128)
		return (1);
	return (0);
}
/*#include <stdio.h>
int main(){
	int x = 128;
	int y = 23;
	printf("%d",ft_isascii(x));
	printf("%d",isascii(x));
	printf("%d",ft_isascii(y));
	printf("%d",isascii(y));
}*/
