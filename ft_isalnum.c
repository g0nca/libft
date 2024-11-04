/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggomes-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:06:02 by ggomes-v          #+#    #+#             */
/*   Updated: 2024/11/04 13:43:51 by ggomes-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= 48 && c <= 58))
		return (1);
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
    int num;

    num = 94;
    printf("%d\n", ft_isalnum(num));
    return(0);
}
*/
