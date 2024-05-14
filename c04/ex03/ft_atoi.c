/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkirmizi <tkirmizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 19:57:22 by tkirmizi          #+#    #+#             */
/*   Updated: 2024/01/31 16:02:51 by tkirmizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	indicator;
	int	result;

	i = 0;
	indicator = 1;
	result = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			indicator = -1 * indicator;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i++] - 48;
	}
	if (indicator == -1)
		return (indicator * result);
	return (result);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*str;

	str = " ---+--++----+1234564ab567";
	printf("%d", ft_atoi(str));
}
*/