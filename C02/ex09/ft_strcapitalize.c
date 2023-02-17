/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaryan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:23:08 by amaryan           #+#    #+#             */
/*   Updated: 2022/10/19 14:02:34 by amaryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int g(char *str,int i)
{
	while ((str[i] > 47 && str[i] < 58)
			|| (str[i] > 64 && str[i] < 91)
			|| (str[i] > 96 && str[i] < 123))
	{
		if (str[i] > 64 && str[i] < 91)
				str[i] += 32;
		i++;
	}
	return (i);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] > 47 && str[i] < 58)
			|| (str[i] > 64 && str[i] < 91)
			|| (str[i] > 96 && str[i] < 123))
		{
			if (str[i] > 96 && str[i] < 123)
			{
				str[i] -= 32;
				i++;
			}
			else
				i++;
			i = g(str,i);
		}
		else
			i++;
	}
	return (str);
}
