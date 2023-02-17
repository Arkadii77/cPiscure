/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaryan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:44:13 by amaryan           #+#    #+#             */
/*   Updated: 2022/10/19 19:08:46 by amaryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;
	char	*alloc;

	i = 0;
	dest = (char *)malloc(ft_strlen(src) * sizeof(char) + 1);
	alloc = dest;
	if (!alloc)
		return (0);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main(int ac,char **av)
{

	char *dest;
	char *src;
	
	if (ac == 2)
	{
		src = ft_strdup(av[1]);
		dest = strdup(av[1]);
		printf("%s\n%s",src,dest);
	}
	return (0);
}
*/
