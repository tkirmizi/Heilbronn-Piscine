/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkirmizi <tkirmizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 21:12:25 by tkirmizi          #+#    #+#             */
/*   Updated: 2024/01/30 14:05:34 by tkirmizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;
	unsigned int	l;

	i = 0;
	j = 0;
	k = 0;
	while (dest[i] != '\0' && i < size)
		i++;
	while (src[j] != '\0')
		j++;
	k = i + j;
	l = i;
	while (l < size - 1 && src[l - i] != '\0')
	{
		dest[l] = src[l - i];
		l++;
	}
	if (i < size)
		dest[l] = '\0';
	return (len(dest) + len(src));
}
