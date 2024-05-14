/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkirmizi <tkirmizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:22:27 by tkirmizi          #+#    #+#             */
/*   Updated: 2024/01/21 12:42:44 by tkirmizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	just_print(int a, int b, int c, int d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (a == '9' && b == '8' && c == '9' && d == '9')
	{
	}
	else
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	ft_print_comb2_real(int a, int b, int c, int d)
{
	a = 48;
	while (a <= 57)
	{
		b = 48;
		while (b <= 57)
		{
			c = 48;
			while (c <= 57)
			{
				d = 48;
				while (d <= 57)
				{
					if (((a * 10) + b) < ((c * 10) + d))
						just_print(a, b, c, d);
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = 48;
	b = 48;
	c = 48;
	d = 48;
	ft_print_comb2_real(a, b, c, d);
}
