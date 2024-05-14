/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkirmizi <tkirmizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:59:04 by tkirmizi          #+#    #+#             */
/*   Updated: 2024/01/29 14:02:51 by tkirmizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "BubirD1";
	s2 = "BubirD";
	printf("%d", ft_strcmp(s1, s2));
	puts("\n");
	printf("%d", strcmp(s1, s2));
	return (0);
}
*/