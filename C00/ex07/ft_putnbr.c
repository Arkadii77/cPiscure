/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaryan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 12:58:18 by amaryan           #+#    #+#             */
/*   Updated: 2022/10/02 16:59:34 by amaryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put(char n)
{
	write(1, &n, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_put('-');
		ft_putnbr(2);
		ft_putnbr(147483648);
	}
	if (nb < 0)
	{
		ft_put('-');
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_put(nb + 48);
}
