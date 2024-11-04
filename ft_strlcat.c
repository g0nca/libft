/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggomes-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:05:45 by ggomes-v          #+#    #+#             */
/*   Updated: 2024/11/04 14:34:41 by ggomes-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lendst;
	size_t	lensrc;

	lensrc = 0;
	lendst = ft_strlen(dst);
	if (size > 0)
	{
		while (src[lensrc] && lensrc < (size - 1))
		{
			dst[lendst + lensrc] = src[lensrc];
			lensrc++;
		}
		dst[lendst + lensrc] = '\0';
	}
	return (ft_strlen(dst));
}
/*
#include <stdio.h>
int main(void)
{
    char test1[] = "Ola";
    char test2[] = "Mundo";
    printf("%ld\n", ft_strlcat(test1, test2, 20));
    return(0);
}
*/
