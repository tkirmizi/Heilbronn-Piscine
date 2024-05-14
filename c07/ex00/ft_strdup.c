/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkirmizi <tkirmizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 20:12:41 by tkirmizi          #+#    #+#             */
/*   Updated: 2024/02/07 20:03:11 by tkirmizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;
	int		count;

	i = 0;
	count = ft_strlen(src);
	dest = (char *) malloc(ft_strlen(src) + 1);
	while (count > 0)
	{
		strd
		dest[i] = src[i];
		i++;
		count--;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>

// int	main(int agrc, char **argv)
// {
// 	printf("%s", ft_strdup(argv[1]));
// 	return (0);
// }