/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkirmizi <tkirmizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 19:57:21 by tkirmizi          #+#    #+#             */
/*   Updated: 2024/02/06 12:32:30 by tkirmizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*string;
	int		i;
	int		j;
	int		k;

	string = malloc(sizeof(strs));
	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			string[k++] = strs[i][j++];
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
			string[k++] = sep[j++];
		i++;
	}
	string[k] = '\0';
	return (string);
}
