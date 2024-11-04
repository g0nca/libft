/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggomes-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:47:53 by ggomes-v          #+#    #+#             */
/*   Updated: 2024/11/04 14:43:47 by ggomes-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)s;
	str = (char *) malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (start < len)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	return (str);
}
/*
int	main(void)
{
	const char str[] = "Hello World !!";
	
	printf("%s\n", ft_substr(str, 6, 11));
	return(0);
}
*/
