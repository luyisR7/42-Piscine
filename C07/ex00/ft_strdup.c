/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-frei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 17:01:36 by lde-frei          #+#    #+#             */
/*   Updated: 2025/08/16 17:01:40 by lde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	while (src[i])
		i++;
	dest = malloc(i + 1);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/* int main(void)
{
	char *str = "bom";
	char *src = ft_strdup(str);
	
	int i;
	for(i = 0; str[i] != '\0'; i++){
		if(str[i] != src[i]){
			printf("diff on [%d]: str ->%c;src ->%c\n", i, str[i], src[i]);
		}
	}
	printf("check on [%d]: str ->%c;src ->%c\n", i, str[i], src[i]);
	return (0);
}  */