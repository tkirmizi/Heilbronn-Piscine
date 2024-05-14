/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkirmizi <tkirmizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 12:45:57 by tkirmizi          #+#    #+#             */
/*   Updated: 2024/01/28 18:59:12 by tkirmizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
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

	str1 = "tahabey";
	str2 = "16548645asdaf";
	str3 = "dsa; 546]1[23]";
	str4 = ";'asfl6";
	ft_str_is_printable(str1);
	ft_str_is_printable(str2);
	ft_str_is_printable(str3);
	ft_str_is_printable(str4);
	return (0);
}
*/
