/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-frei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 14:43:48 by lde-frei          #+#    #+#             */
/*   Updated: 2025/08/13 14:43:50 by lde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	if (power < 0)
	{
		return (0);
	}
	while (i < power)
	{
		result *= nb;
		i++;
	}
	return (result);
}
/*
int main(void)
{
	printf("%d\n", ft_iterative_power(4, 2));

	return (0);
}*/