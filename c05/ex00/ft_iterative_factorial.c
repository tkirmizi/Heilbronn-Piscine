/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkirmizi <tkirmizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 14:30:59 by tkirmizi          #+#    #+#             */
/*   Updated: 2024/02/05 11:54:16 by tkirmizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
	{
		while (nb > 0)
		{
			result *= nb;
			nb--;
		}
		return (result);
	}
}

/*
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	
	printf("%d", ft_iterative_factorial(atoi(argv[1])));
	return (0);
}
*/