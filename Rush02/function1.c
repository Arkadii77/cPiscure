/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaryan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 16:44:15 by amaryan           #+#    #+#             */
/*   Updated: 2022/10/18 18:01:47 by amaryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rushh02.h"

void	first_error(void)
{
	write(1, "Error\n", 6);
	exit(1);
}

void	second_error(void)
{
	write(1, "Dict Error\n", 11);
	exit(1);
}

int	fn(char *str, char *fin, int f, int j)
{
	int	i;

	i = 0;
	while (i < f)
	{
		if (str[i + j] == '\0')
			return (0);
		if (str[i + j] != fin[i])
			return (0);
		++i;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	f;
	int	g;

	i = 0;
	f = 0;
	while (to_find[f] != '\0')
		++f;
	if (f == 0)
		return (str);
	i = 0;
	g = 0;
	while (str[g] != '\0')
	{
		if (str[g] == *to_find)
			i = fn(str, to_find, f, g);
		if (i)
			return (str + g);
		else
			++g;
	}
	second_error();
	return (0);
}

char	*ft_putnbr(int nb)
{
	char	*arr;
	int		i;

	i = 0;
	arr = malloc(sizeof(char) * 3);
	if (nb >= 10)
	{
		arr[i] = (nb / 10 + 48);
		i++;
		arr[i] = (nb % 10 + 48);
		i++;
	}
	else
	{
		arr = malloc(sizeof(char));
		arr[i] = (nb % 10 + 48);
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
