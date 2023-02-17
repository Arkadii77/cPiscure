/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaryan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:03:04 by amaryan           #+#    #+#             */
/*   Updated: 2022/10/18 19:04:16 by amaryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rushh02.h"

void	fill(char *str, char *name)
{
	int		dict;
	char	*sym;
	int		i;

	i = 0;
	dict = open_file(name);
	sym = malloc(sizeof(char));
	while (read(dict, sym, 1))
	{
		str[i] = *sym;
		i++;
	}
	close_file(dict);
}

void	get_line_by_words(char *str)
{
	int	i;
	int	space;

	i = -1;
	space = 0;
	while (str[++i] >= '0' && str[i] <= '9')
		;
	while (str[i] == ' ')
		i++;
	if (str[i] != ':')
		second_error();
	i++;
	while (str[i] == ' ')
		i++;
	while ((str[i] > 32 && str[i] < 127) && (str[i] != '\0' && str[i] != '\n'))
	{
		space = 1;
		write(1, &str[i], 1);
		i++;
	}
	if (space == 0)
		second_error();
	write(1, " ", 1);
}

int	atoi_me(char *num)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (num[i])
	{
		res = (res * 10) + (num[i] - 48);
		i++;
	}
	return (res);
}

int	validate_from_0_to_99(char *str, char *num)
{
	int	res;
	int	div;
	int	minus;

	res = atoi_me(num);
	if (res >= 0 && res <= 20)
	{
		get_line_by_words(ft_strstr(str, num));
		return (1);
	}
	else if (res > 20 && res <= 99)
	{
		div = res - (res % 10);
		minus = (res - div);
		get_line_by_words(ft_strstr(str, ft_putnbr(div)));
		if (res % 10 != 0)
		{
			validate_from_0_to_99(str, ft_putnbr(minus));
		}
		return (1);
	}
	return (0);
}

void	count_zeros(char *str, int length)
{
	char	*count_zeros_list;
	int		i;

	i = 0;
	count_zeros_list = malloc(sizeof(char) * (length + 2));
	count_zeros_list[0] = '1';
	while (++i < length)
	{
		count_zeros_list[i] = '0';
	}
	count_zeros_list[i] = '\0';
	get_line_by_words(ft_strstr(str, count_zeros_list));
}
