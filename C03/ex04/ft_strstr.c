/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 13:53:13 by bepoisso          #+#    #+#             */
/*   Updated: 2024/07/21 14:31:31 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	check;

	if (!(*to_find))
		return (str);
	while (*str)
	{
		if (*str == *to_find)
		{
			i = 0;
			check = 0;
			while (to_find[i])
			{
				if (to_find[i] != str[i])
					check = 1;
				i++;
			}
			if (check == 0)
				return (str);
		}
		str++;
	}
	return (0);
}
