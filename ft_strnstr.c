/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggomes-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:06:58 by ggomes-v          #+#    #+#             */
/*   Updated: 2024/11/04 13:55:25 by ggomes-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (*little == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		while (big[i + j] == little[j])
		{
			if (little[j + 1] == '\0')
				return ((char *)little);
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
int main(void)
{
    char test1[] = "Hello World !!!";
    char test2[] = "World";
    printf("%s\n", ft_strnstr(test1, test2, 20));
    return(0);
}
*/
