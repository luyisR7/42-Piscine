/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomes-b <dgomes-b@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 12:44:12 by lde-frei          #+#    #+#             */
/*   Updated: 2025/08/03 11:20:32 by dgomes-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	column(int col, int row, int x, int y)
{
	while (col <= x)
	{
		if (row == 1) // se primeira linha
		{
			if (col == 1) //se for primeira posicao
				ft_putchar('A');
			else if (col == x) // se for ultima posicao da coluna
				ft_putchar('C');
			else // meio
				ft_putchar('B');
		}
		else if (row == y) // ultima linha
			if (col == 1)
				ft_putchar('C');
		else if (col == x)
			ft_putchar('A');
		else					// meio
			ft_putchar('B');
		else if (col == 1 || col == x)
			ft_putchar('B');
		else
			ft_putchar(' ');
		col++;
	}
}

void	rush(int x, int y)
{
	int	col;
	int	row;

	if (x <= 0 || y <= 0) // se os parametros forem negativos, da erro
	{
		write(1, "You have entered an invalid number.\n", 36);
	}
	else // se forem validos 
	{
		col = 1; // coluna inicia na primeira posicao
		row = 1; // linha inicia na primeira posicao
		while (row <= y) 
		{
			column(col, row, x, y);
			ft_putchar('\n');
			col = 1; // refresh da coluna para primeira posicao
			row++;
		}
	}
}
