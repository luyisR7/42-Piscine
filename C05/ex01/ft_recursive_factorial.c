/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-frei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 12:41:39 by lde-frei          #+#    #+#             */
/*   Updated: 2025/08/13 12:41:42 by lde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	if (nb <= 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

/*int main(void)
{
	printf("%d\n", ft_recursive_factorial(7));

	return (0);
}*/