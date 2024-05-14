/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkirmizi <tkirmizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 13:57:00 by tkirmizi          #+#    #+#             */
/*   Updated: 2024/02/04 14:14:16 by tkirmizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		while (power > 1)
		{
			return (nb * (ft_recursive_power (nb, power - 1)));
			power--;
		}
		return (result);
	}
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_recursive_power(0, 0));
	return (0);
}
*/