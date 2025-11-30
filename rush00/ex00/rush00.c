/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomes-b <dgomes-b@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 12:11:55 by lyokoiga          #+#    #+#             */
/*   Updated: 2025/08/03 11:20:24 by dgomes-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	column(int col, int row, int x, int y)
{
	while (col <= x)
	{
		if (row == 1 || row == y)
		{
			if (col == 1 || col == x)
				ft_putchar('o');
			else
				ft_putchar('-');
		}
		else
		{
			if (col == 1 || col == x)
				ft_putchar('|');
			else
				ft_putchar(' ');
		}
		col++;
	}
}

void	rush(int x, int y)
{
	int	col;
	int	row;

	if (x <= 0 || y <= 0)
	{
		write(1, "You have entered an invalid number.\n", 36);
	}
	else
	{
		col = 1;
		row = 1;
		while (row <= y)
		{
			column(col, row, x, y);
			ft_putchar('\n');
			col = 1;
			row++;
		}
	}
}
