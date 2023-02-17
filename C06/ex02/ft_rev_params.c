/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaryan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:24:22 by amaryan           #+#    #+#             */
/*   Updated: 2022/10/13 19:19:56 by amaryan          ###   ########.fr       */
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

	i = argc - 1;
	while (i > 0)
	{
		j = 0;
		while (argv[i][j] && argc)
		{
			ft_a(argv[i][j]);
			j++;
		}
		ft_a('\n');
		i--;
	}
	return (0);
}
