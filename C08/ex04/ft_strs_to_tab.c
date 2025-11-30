/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-frei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 19:59:46 by lde-frei          #+#    #+#             */
/*   Updated: 2025/08/21 19:59:48 by lde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		len;

	len = ft_strlen(src);
	dest = malloc(len + 1);
	if (!dest)
		return (0);
	return (ft_strcpy(dest, src));
}

struct s_stock_str	*ft_str_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*str;

	str = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		str[i].size = ft_strlen(av[i]);
		str[i].str = av[i];
		str[i].copy = ft_strdup(av[i]);
		i++;
	}
	str[ac].size = 0;
	str[ac].str = NULL;
	str[ac].copy = NULL;
	return (str);
}
