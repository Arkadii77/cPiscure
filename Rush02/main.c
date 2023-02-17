/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsbadal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 12:40:39 by arsbadal          #+#    #+#             */
/*   Updated: 2022/10/18 17:59:02 by amaryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rushh02.h"

int	main(int argc, char **argv)
{
	if (argc == 2)
		check_arg("numbers.dict", argv[1]);
	else if (argc == 3)
		check_arg(argv[1], argv[2]);
	else
		first_error();
	return (0);
}
