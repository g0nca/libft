/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggomes-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:05:00 by ggomes-v          #+#    #+#             */
/*   Updated: 2024/11/04 14:09:25 by ggomes-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	count_numbers(int n)
{
	int	count;

	count = 1;
	while (n / 10 != 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	int_to_string(int n, char *str)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		str[i] = '-';
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		str[i] = n % 10 + '0';
		n /= 10;
		i++;
	}
	str[i] = '\0';
	return (*str);
}

char	*reverse_string(char *str)
{
	char	tmp;
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(str) - 1;
	while (i < j / 2)
	{
		if (str[i] == '-')
			i++;
		tmp = str[j];
		str[j] = str[i];
		str[i] = tmp;
		i++;
		j--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;

	str = (char *)malloc(count_numbers(n) * sizeof(char));
	if (str == NULL)
		return (NULL);
	int_to_string(n, str);
	reverse_string(str);
	return (str);
}
/*
int	main(void)
{
	printf("%s\n", ft_itoa(213324234));
	
	return(0);
}
*/
