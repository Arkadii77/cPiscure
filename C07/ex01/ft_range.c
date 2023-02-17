/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaryan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:31:35 by amaryan           #+#    #+#             */
/*   Updated: 2022/10/19 17:29:03 by amaryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		i;
	int		*dest;
	int		*src;
	int		range;

	i = 0;
	range = max - min;
	if (min >= max)
		return (0);
	dest = (int *)malloc(range * sizeof(int));
	src = dest;
	if (!src)
		return (0);
	while (i < range)
	{
		dest[i] = min;
		min++;
		i++;
	}
	return (dest);
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
	max = 6;
	rang = max - min;
	j = ft_range(min,max);
	while (i < rang)
	{
		printf("%d:\t",j[i]);
		i++;
	}
	printf("\n");
}
*/
