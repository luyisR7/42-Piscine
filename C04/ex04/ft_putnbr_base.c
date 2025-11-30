/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-frei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 13:23:56 by lde-frei          #+#    #+#             */
/*   Updated: 2025/08/17 13:23:59 by lde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb, int value, char *symbols)
{
	long	n;

	n = nb;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n >= value)
		ft_putnbr(n / value, value, symbols);
	ft_putchar(symbols[nb % value]);
}

int	double_char(char *symbols)
{
	int	i;
	int	j;

	i = 0;
	while (symbols[i])
	{
		j = i + 1;
		while (symbols[j])
		{
			if (symbols[i] == symbols[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return ;
		i++;
	}
	if (i < 2)
		return ;
	if (double_char(base) == 1)
		return ;
	ft_putnbr(nbr, i, base);
}

/* int	main(int ac, char **av)
{
	int nbr;
	char *base;

	nbr = atoi(av[1]);
	base = av[2];
	ft_putnbr_base(nbr, base);
	ft_putchar('\n');
	return (0);
} */