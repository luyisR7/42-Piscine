/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-frei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 19:45:38 by lde-frei          #+#    #+#             */
/*   Updated: 2025/08/18 19:45:41 by lde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = malloc(size * sizeof(int));
	if (!*range)
		return (-1);
	while (i < size)
	{
		range[0][i] = min + i;
		i++;
	}
	return (size);
}

/* int main()
{
	int *arr, i, size;
	
	size = ft_ultimate_range(&arr, 5, 10);
	if(size > 0)
	{
		for(i=0;i<size;i++)
			printf("[%d]", arr[i]);
		free(arr);
	}
	else if(size == 0)
		printf("Error\n");
	return (0);
} */
