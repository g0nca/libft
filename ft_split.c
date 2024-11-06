/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggomes-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 12:28:15 by ggomes-v          #+#    #+#             */
/*   Updated: 2024/11/06 17:15:54 by ggomes-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	count_words(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

static char	*save_words(const char *s, char c)
{
	char	*str;
	int		n;
	int		i;

	n = 0;
	while (s[n] != '\0' && s[n] != c)
		n++;
	str = (char *)malloc(n * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		str[i] = s[i];
		i++;
	}
	return (str);
}

static void	*free_array(char **array)
{
	int	i;

	i = 0;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		i;

	array = (char **)malloc(sizeof(char *) * (count_words(s)));
	if (!s || !array)
		return (NULL);
	i = 0;
	while (*s && c != '\0')
	{
		while (*s == c)
			s++;
		array[i] = save_words(s, c);
		if (array[i] == NULL)
			return (free_array(array));
		i++;
		while (*s && *s != c)
			s++;
	}
	return (array);
}

int	main(void)
{
	const char str[] = "hello!";
	char src = ' ';
	char **vector = NULL;
	int i;

	i = 0;
	vector = ft_split(str, src);

	while(vector[i])
	{
		printf("%d,%s\n", i, vector[i]);
		i++;
	}
	free(vector);
	vector = NULL;
	return(0);
}

