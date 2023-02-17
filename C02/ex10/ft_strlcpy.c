/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaryan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:56:08 by amaryan           #+#    #+#             */
/*   Updated: 2022/10/11 16:59:33 by amaryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size != 0)
	{
		while ( size - 1 > i  && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
	}
	dest[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);

}
int main()
{
	char dest[] = "hevvvvvbrbs";
	char src[] = "jxgcbhcbjc";
	printf("%d\t%s",ft_strlcpy(dest,src,0),dest);

}
