/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-frei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 15:21:14 by lde-frei          #+#    #+#             */
/*   Updated: 2025/08/02 15:21:19 by lde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/*int main()
{
	int a = 10;
	int b = 20;

	int *aptr = &a;
	int *bptr = &b;

	ft_swap(aptr, bptr);

	printf("Valor aptr = %d\nValor bptr = %d\n", *aptr, *bptr);

	return 0;
}*/