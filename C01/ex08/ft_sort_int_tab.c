/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-frei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 13:23:38 by lde-frei          #+#    #+#             */
/*   Updated: 2025/08/03 13:25:37 by lde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	n;
	int	tmp;

	i = 0;
	while (i < size -1)
	{
		n = i + 1;
		while (n < size)
		{
			if (tab[n] < tab[i])
			{
				tmp = tab[n];
				tab[n] = tab[i];
				tab[i] = tmp;
			}
			n++;
		}
		i++;
	}
}
/*int main(void)
{

    return 0;
}*/