/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkirmizi <tkirmizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 14:36:10 by tkirmizi          #+#    #+#             */
/*   Updated: 2024/01/31 17:47:04 by tkirmizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == 0)
		ft_putchar('0');
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb > 0)
	{
		if (nb / 10 != 0)
			ft_putnbr (nb / 10);
		ft_putchar (nb % 10 + '0');
	}
	if (nb < 0)
	{
		nb = -nb;
		write (1, "-", 1);
		if (nb / 10 != 0)
			ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
}

/*
int	main(void)
{
	ft_putnbr(2147483647);
	return (0);
}
*/