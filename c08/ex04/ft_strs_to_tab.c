/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkirmizi <tkirmizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 10:50:01 by tkirmizi          #+#    #+#             */
/*   Updated: 2024/02/07 17:20:42 by tkirmizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;
	int		count;

	i = 0;
	count = ft_strlen(src);
	dest = (char *)malloc(count + 1);
	while (count > 0)
	{
		dest[i] = src[i];
		i++;
		count--;
	}
	dest[i] = '\0';
	return (dest);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*res;
	int			i;

	i = 0;
	res = malloc(sizeof(*res) * (ac + 1));
	if (!res)
		return (NULL);
	while (i < ac)
	{
		res[i].size = ft_strlen(av[i]);
		res[i].str = av[i];
		res[i].copy = ft_strdup(res[i].str);
		if (!res[i].copy)
		{
			while (i >= 0)
			{
				free (res[i].copy);
				i--;
			}
			free (res);
		}
		i++;
	}
	res[i].str = 0;
	return (res);
}
