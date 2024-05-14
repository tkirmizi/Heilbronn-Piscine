/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkirmizi <tkirmizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 17:06:49 by tkirmizi          #+#    #+#             */
/*   Updated: 2024/02/06 12:28:05 by tkirmizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	*result;
	int	i;

	i = 0;
	size = max - min;
	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	result = (int *)malloc(size * sizeof(int));
	if (result == 0)
		return (-1);
	while (i < size)
	{
		result[i] = min;
		min++;
		i++;
	}
	*range = result;
	return (size);
}
