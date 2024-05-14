/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkirmizi <tkirmizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 00:38:19 by tkirmizi          #+#    #+#             */
/*   Updated: 2024/01/27 12:18:48 by tkirmizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}

/*
int	main(void)
{
	char	*str1;
	char	*str2;
	char	*str3;
	char	*str4;

	str1 = "TAHAveTAHA";
	str2 = "124594T";
	str3 = "alibey";
	str4 = "kirmizi";
	ft_str_is_lowercase(str1);
	ft_str_is_lowercase(str2);
	ft_str_is_lowercase(str3);
	ft_str_is_lowercase(str4);
	return (0);
}
*/
