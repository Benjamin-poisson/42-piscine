/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dak <dak@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 17:19:35 by bpoisson          #+#    #+#             */
/*   Updated: 2024/03/04 16:12:00 by dak              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "./ft_putchar.c"

void	ft_putchar(char c);

int	check_error(int x, int y)
{
	if (x <= 0 || y <= 0)
		return (1);
	return (0);
}

void	rush(int x, int y)
{
	int	line;
	int	collumn;

	line = -1;
	while (++line < y && (!check_error(x, y)))
	{
		collumn = -1;
		while (++collumn < x)
		{
			if ((collumn == 0 && line == 0)
				|| (collumn == x - 1 && line == y - 1
					&& x != 1 && y != 1))
				ft_putchar('/');
			else if ((collumn == x - 1 && line == 0)
				|| (collumn == 0 && line == y - 1))
				ft_putchar('\\');
			else if (line == 0 || line == y - 1
				|| collumn == 0 || collumn == x - 1)
				ft_putchar('*');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
