/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggomes-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:28:36 by ggomes-v          #+#    #+#             */
/*   Updated: 2024/11/04 13:50:35 by ggomes-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	signal;
	int	res;

	res = 0;
	signal = 1;
	i = 0;
	while (nptr[i] >= 0 && nptr[i] <= 42)
		i++;
	while (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			signal = -signal;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		res *= 10;
		res += nptr[i] - 48;
		i++;
	}
	return (res * signal);
}
/*
#include <stdio.h>
int main(void)
{
    char test[] = "   --+-+-9978rer6786";
    printf("%d\n", ft_atoi(test));
    return(0);
}
*/
