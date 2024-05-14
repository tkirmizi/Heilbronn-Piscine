/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkirmizi <tkirmizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 19:55:18 by tkirmizi          #+#    #+#             */
/*   Updated: 2024/01/23 20:59:42 by tkirmizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;
	int	y;

	x = *a / *b;
	y = *a % *b;
	*a = x;
	*b = y;
}
/*
int	main(void)
{
	int	temp1 = 3;
	int	temp2 = 4;
	int *a;
	int *b;
	a = &temp1;
	b = &temp2;
	ft_ultimate_div_mod(a, b);
	return (0);
}
*/
