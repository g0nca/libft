/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggomes-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:48:18 by ggomes-v          #+#    #+#             */
/*   Updated: 2024/11/04 14:18:22 by ggomes-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	int		len;

	if (!s)
		return (NULL);
	len = ft_strlen(s) + 1;
	str = (char *) malloc(len * sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s, len);
	return (str);
}
/*
int main(void)
{
    const char original[] = "Hello World !!";
    char *copia = ft_strdup(original);

    printf("%s\n", copia);
    free(copia);
    return(0);
}
*/
