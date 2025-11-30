/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-frei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 18:10:06 by lde-frei          #+#    #+#             */
/*   Updated: 2025/08/18 18:11:24 by lde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*arr;
	int	size;

	i = 0;
	if (min >= max)
		return (NULL);
	size = max - min;
	arr = malloc(size * sizeof(int));
	while (i < size)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}

/* int main(void)
{
  int *lol=ft_range(0, 2);
} */