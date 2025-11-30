/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-frei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 12:15:00 by lde-frei          #+#    #+#             */
/*   Updated: 2025/08/13 12:15:03 by lde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	i = nb - 1;
	result = nb;
	if (nb == 0)
	{
		return (1);
	}
	if (nb < 0)
	{
		return (0);
	}
	while (i > 0)
	{
		result *= i;
		i--;
	}
	return (result);
}

/*int main(void)
{
	printf("%d\n", ft_iterative_factorial(12));

	return (0);
}*/