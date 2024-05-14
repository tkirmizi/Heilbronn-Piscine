/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkirmizi <tkirmizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 12:22:22 by tkirmizi          #+#    #+#             */
/*   Updated: 2024/01/27 12:53:04 by tkirmizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
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

	str1 = "TAHAb";
	str2 = "alibey";
	str3 = "1236";
	str4 = "ASFK";

	ft_str_is_uppercase(str1);
	ft_str_is_uppercase(str2);
	ft_str_is_uppercase(str3);
	ft_str_is_uppercase(str4);
}
*/