/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-frei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 13:47:32 by lde-frei          #+#    #+#             */
/*   Updated: 2025/08/08 13:47:36 by lde-frei         ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dlen;
	unsigned int	slen;
	unsigned int	i;

	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	i = 0;
	if (dlen >= size)
	{
		return (slen + size);
	}
	while (src[i] != '\0' && size > (dlen + 1))
	{
		dest[dlen] = src[i];
		dlen++;
		i++;
	}
	dest[dlen] = '\0';
	return (dlen + slen);
}

/*int main(void)
{
	char str[25] = "alo bom dia";
	char src[] = " tudo bem?";

	ft_strlcat(str, src, 25);

	printf("%s\n", str);

	return (0);
}*/