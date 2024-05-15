/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkirmizi <tkirmizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 13:05:28 by tkirmizi          #+#    #+#             */
/*   Updated: 2024/01/20 14:07:34 by tkirmizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_topbottom(int j, int width)
{
	if (j == 1 || j == width)
	{
		ft_putchar('o');
	}
	else
	{
		ft_putchar('-');
	}
}

void	inner_sides(int j, int width)
{
	if (j == 1 || j == width)
		ft_putchar('|');
	else
		ft_putchar(' ');
}

void	rush00(int width, int height)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	if (width <= 0 || height <= 0)
	{
		ft_putchar('\n');
		return ;
	}
	while (i <= height)
	{
		j = 1;
		while (j <= width)
		{
			if (i == 1 || i == height)
				ft_topbottom(j, width);
			else
				inner_sides(j, width);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
