/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaryan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 11:14:38 by amaryan           #+#    #+#             */
/*   Updated: 2022/10/02 12:57:14 by amaryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	comb2(char p)
{
	write(1, &p, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			comb2 (i / 10 + 48);
			comb2 (i % 10 + 48);
			comb2 (' ');
			comb2 (j / 10 + 48);
			comb2 (j % 10 + 48);
			if (i != 98 || j != 99)
			{
				comb2 (',');
				comb2(32);
			}
			j++;
		}
		i++;
	}
}