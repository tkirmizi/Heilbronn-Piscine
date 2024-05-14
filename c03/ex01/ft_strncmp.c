/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkirmizi <tkirmizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 17:22:29 by tkirmizi          #+#    #+#             */
/*   Updated: 2024/02/01 19:40:36 by tkirmizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && n > 0)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		s1++;
		s2++;
		n--;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char			*s1;
	char			*s2;
	unsigned int	n;

	s1 = "asd";
	s2 = "asdf";
	n = 3;
	printf("%d", strncmp(s1, s2, n));
	puts("\n");
	//printf("%d", ft_strncmp(s1, s2, n));
	return (0);
}
*/
