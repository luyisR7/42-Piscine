/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-frei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 11:11:27 by lde-frei          #+#    #+#             */
/*   Updated: 2025/08/06 11:11:29 by lde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	char	num[5];
	long	first;
	long	second;

	first = 0;
	while (first <= 98)
	{
		second = first + 1;
		while (second <= 99)
		{
			num[0] = (first / 10) + '0';
			num[1] = (first % 10) + '0';
			num[2] = ' ';
			num[3] = (second / 10) + '0';
			num[4] = (second % 10) + '0';
			write (1, num, 5);
			if (!(second == 99 && first == 98))
				write (1, ", ", 2);
			second++;
		}
		first++;
	}
}

/*int main()
{
	ft_print_comb2();

	return 0;
}*/