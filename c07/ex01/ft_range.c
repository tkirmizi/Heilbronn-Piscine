/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkirmizi <tkirmizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 16:03:51 by tkirmizi          #+#    #+#             */
/*   Updated: 2024/02/06 12:26:05 by tkirmizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	i;
	int	*result;

	i = 0;
	size = max - min;
	if (max <= min)
		return (NULL);
	result = (int *)malloc(size * sizeof(int));
	if (result == 0)
		return (NULL);
	while (i < size)
	{
		result[i] = min + i;
		i++;
	}
	return (result);
}
