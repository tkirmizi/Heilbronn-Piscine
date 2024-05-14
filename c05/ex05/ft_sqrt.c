/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkirmizi <tkirmizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 14:27:37 by tkirmizi          #+#    #+#             */
/*   Updated: 2024/02/05 12:57:42 by tkirmizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	i;
	long	j;

	j = nb;
	if (j <= 0)
	{
		return (0);
	}
	if (j == 1)
	{
		return (1);
	}
	i = 2;
	if (j >= 2)
	{
		while (i * i <= j)
		{
			if (i * i == j)
			{
				return (i);
			}
			i++;
		}
	}
	return (0);
}

// #include <stdio.h>
// #include <stdlib.h>
// int	main(int argc, char **argv)
// {
// 	printf("%d", ft_sqrt(atoi(argv[1])));
// 	return (0);
// }