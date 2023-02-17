/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   owr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaryan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 18:26:40 by amaryan           #+#    #+#             */
/*   Updated: 2022/10/18 19:40:32 by amaryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rushh02.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_strcmp(char *s1, char *s2)
{
	int				i;
	unsigned char	_a;
	unsigned char	_b;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		_a = s1[i];
		_b = s2[i];
		if (_a != _b)
		{
			return (_a - _b);
		}
		i++;
	}
	return (0);
}

int	open_file(char *name)
{
	int	dict;

	dict = open(name, O_RDONLY);
	if (dict < 0)
		first_error();
	return (dict);
}

void	close_file(int fileid)
{
	close(fileid);
}

int	count_symbols(char *name)
{
	int		dict;
	char	*sym;
	int		i;

	i = 0;
	dict = open_file(name);
	sym = malloc(sizeof(char));
	while (read(dict, sym, 1) != '\0')
	{
		i++;
	}
	close_file(dict);
	return (i);
}
