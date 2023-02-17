/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaryan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 17:04:15 by amaryan           #+#    #+#             */
/*   Updated: 2022/10/19 18:46:45 by amaryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		ra;

	i = 0;
	if (min >= max)
	{
		return (0);
	}
	*range = malloc((max - min) * sizeof(int));
	if (*range == NULL)
	{
		return (-1);
	}
	ra = min;
	while (i < (max - ra))
	{
		*(*range + i) = min;
		min++;
		i++;
	}
	return (max - ra);
}
/*
int main(void)
{
	int min;
	int max;
	int i = 0;
	int *j;
	int rang;

	min = 2;
	max = 10;
	rang = ft_ultimate_range(&j,min,max);
	while (i < rang)
	{
		printf("%d:\t",j[i]);
		i++;
	}
	printf("\n");
}
*/
