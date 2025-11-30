/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomes-b <dgomes-b@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 12:29:58 by lde-frei          #+#    #+#             */
/*   Updated: 2025/08/03 11:20:36 by dgomes-b         ###   ########.fr       */
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
			if (col == 1)
				ft_putchar('A');
			else if (col == x)
				ft_putchar('C');
			else
				ft_putchar('B');
		}
		else
		{
			if (col == 1 || col == x)
				ft_putchar('B');
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
