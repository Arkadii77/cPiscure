/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaryan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 18:04:26 by amaryan           #+#    #+#             */
/*   Updated: 2022/10/16 20:53:24 by amaryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rushh02.h"

void	find_num(char *str, char *num)
{
	int		length;
	int		hndr;
	int		div_by_three;
	char	*three;
	int		i;

	i = -1;
	length = ft_strlen(num);
	three = malloc(sizeof(char) * (length) + 1);
	if (length > 2)
	{
		if (length == 3)
		{
			hndr = atoi_me(num);
			validate_from_0_to_99(str, ft_putnbr((hndr / 100)));
			get_line_by_words(ft_strstr(str, "100"));
			hndr = hndr % 100;
			if (hndr != 0)
				validate_from_0_to_99(str, ft_putnbr(hndr));
		}
		else if (length > 3)
		{
			div_by_three = length % 3;
			if (div_by_three == 0)
				div_by_three = 3;
			while (++i <= (div_by_three - 1))
				three[i] = num[i];
			three[i] = '\0';
			find_num(str, three);
			count_zeros(str, (length - div_by_three + 1));
			recursion_call(num, length, div_by_three, str);
		}
	}
	else
		validate_from_0_to_99(str, num);
}

void	recursion_call(char *num, int length, int start_from, char *str_all)
{
	char	*str;
	int		i;
	int		check;
	int		save_start_from;

	i = 0;
	check = 0;
	save_start_from = start_from;
	str = malloc(sizeof(char) * (length + 1));
	while (start_from <= length)
	{
		if (num[start_from] >= '1' && num[start_from] <= '9')
			check = 1;
		if (check)
		{
			str[i] = num[start_from];
			i++;
		}
		start_from++;
	}
	str[i] = '\0';
	if (ft_strlen(str) > 0)
		find_num(str_all, str);
}

int	validate_input(char *input)
{
	int	i;

	i = -1;
	while (input[++i])
	{
		if (input[i] < '0' || input[i] > '9')
			return (0);
	}
	return (1);
}

void	check_arg(char *file_name, char *arg)
{
	int		length;
	char	*str;

	if (validate_input(arg))
	{
		length = count_symbols(file_name);
		if (length < 3)
			second_error();
		str = malloc(sizeof(char) * length);
		fill(str, file_name);
		find_num(str, arg);
	}
	else
		first_error();
}
