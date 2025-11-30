/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-frei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 18:07:38 by lde-frei          #+#    #+#             */
/*   Updated: 2025/08/07 18:07:46 by lde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	len;
	int	i;

	len = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i + len] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}

/*int main(void)
{
	char str1[] = "aloo";
	char str2[] = "quem fala";

	printf("%s\n", ft_strcat(str1, str2));

	return (0);
}*/