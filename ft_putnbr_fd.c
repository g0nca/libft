/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggomes-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:28:54 by ggomes-v          #+#    #+#             */
/*   Updated: 2024/11/04 17:28:48 by ggomes-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{	
	int	signal;

	if (n < -2147483647)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		ft_putnbr_fd(147483647, fd);
		return ;
	}
	signal = 1;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		signal *= -1;
		n *= -1;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	ft_putchar_fd((n % 10) + '0', fd);
}	
/*
int	main(void)
{
	int	number;

	number = -133570;
	ft_putnbr_fd(number, 1);
	return (0);
}
*/
