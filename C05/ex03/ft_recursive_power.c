/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaryan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 18:33:28 by amaryan           #+#    #+#             */
/*   Updated: 2022/10/17 15:37:15 by amaryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power > 1)
	{
		return (nb * ft_recursive_power(nb, (power - 1)));
		power--;
	}
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (i);
}
