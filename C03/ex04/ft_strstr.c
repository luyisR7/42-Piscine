/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-frei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 19:42:51 by lde-frei          #+#    #+#             */
/*   Updated: 2025/08/07 19:42:55 by lde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			while (str[i + j] == to_find[j] && to_find[j] != '\0')
			{
				j++;
				if (to_find[j] == '\0')
					return (&str[i]);
			}
		}
		i++;
	}
	return (NULL);
}

/*int main(void)
{
	char *s1 = "alo galera do zap";
	char *substr = "do";

	substr = ft_strstr(s1, substr);

	printf("%s\n", substr);

	return 0;
}*/