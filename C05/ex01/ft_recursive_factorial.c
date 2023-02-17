/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaryan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 18:06:50 by amaryan           #+#    #+#             */
/*   Updated: 2022/10/12 18:15:36 by amaryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb > 0)
	{
		i *= nb * ft_recursive_factorial(nb - 1);
		nb--;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (i);
}
