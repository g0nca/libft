/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggomes-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:07:16 by ggomes-v          #+#    #+#             */
/*   Updated: 2024/11/04 13:44:48 by ggomes-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (0);
	return (1);
}
/*
#include <stdio.h>
#include <ctype.h>
int main(void)
{
    int num;

    num = 65;
    printf("%d\n", ft_isalpha(num));
    printf("%d\n", isalpha(num));
    return(0);
}
*/
