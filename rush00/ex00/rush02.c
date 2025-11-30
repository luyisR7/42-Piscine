/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomes-b <dgomes-b@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 10:56:47 by dgomes-b          #+#    #+#             */
/*   Updated: 2025/08/03 11:20:30 by dgomes-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	column(int col, int row, int x, int y)
{
	while (col <= x)
	{
		if (row == 1)
		{
			if (col == 1 || col == x)
				ft_putchar('A');
			else
				ft_putchar('B');
		}
		else if (row == y)
		{
			if (col == 1 || col == x)
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
