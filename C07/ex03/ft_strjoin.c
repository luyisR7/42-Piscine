/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-frei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 13:15:32 by lde-frei          #+#    #+#             */
/*   Updated: 2025/08/20 13:15:41 by lde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(dest);
	while (src[i])
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		sep_len;
	char	*result;
	int		total_len;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	i = 0;
	total_len = 0;
	sep_len = ft_strlen(sep);
	while (i < size)
		total_len += ft_strlen(strs[i++]);
	total_len += sep_len * (size - 1);
	result = malloc(total_len + 1);
	if (!result)
		return (NULL);
	result[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(result, strs[i++]);
		if (i < size)
			ft_strcat(result, sep);
	}
	return (result);
}

/* int main() {
    char* palavras[] = {"maçã", "banana", "laranja"};
    int n = 3;

    char* resultado = ft_strjoin(n, palavras, ", ");
    if (resultado) {
        printf("Resultado: %s\n", resultado);
        free(resultado);
    }

    return 0;
} */
