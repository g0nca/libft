/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggomes-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:18:29 by ggomes-v          #+#    #+#             */
/*   Updated: 2024/11/04 16:23:08 by ggomes-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;

	str = 0;
	str = (char *)malloc(ft_strlen((s) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
char fttoupper(unsigned int i, char c)
{
    (void)i;
    if(c >= 'a' && c <= 'z')
        return(c - 32);
    return(c);
}

int main(void)
{
    const char *original = "hello world";

    char *result = ft_strmapi(original, fttoupper);

    if(result)
    {
        printf("Original: %s\n", original);
        printf("Modificada: %s\n", result);

        free(result);
    }
    else
    {
        printf("Erro ao alocar memória.\n");
    }
    return (0);
}
*/
