/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaryan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:52:59 by amaryan           #+#    #+#             */
/*   Updated: 2022/10/20 11:42:15 by amaryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	j;

	j = 2;
	if (nb <= 1)
		return (0);
	while (j <= (nb / j))
	{
		if (!(nb % j))
			return (0);
		j++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	g;

	g = ft_is_prime(nb);
	if (nb < 2)
		return (2);
	if (g == 0)
	{
		return (ft_find_next_prime(nb + 1));
	}
	return (nb);
}
