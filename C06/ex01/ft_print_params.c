/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaryan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:26:53 by amaryan           #+#    #+#             */
/*   Updated: 2022/10/13 18:20:20 by amaryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_a(char a)
{
	write(1, &a, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	j = 1;
	while (j < argc)
	{
		i = 0;
		while (argv[j][i])
		{
			ft_a(argv[j][i]);
			i++;
		}
		ft_a('\n');
		j++;
	}
	return (0);
}
