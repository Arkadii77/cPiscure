/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaryan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 18:34:11 by amaryan           #+#    #+#             */
/*   Updated: 2022/10/18 19:04:06 by amaryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSHH02_H
//#define RUSHH02_H

# include<stdio.h>
# include<stdlib.h>
# include<unistd.h>
# include<fcntl.h>
# include<sys/types.h>
# include<sys/stat.h>

void	first_error(void);
void	second_error(void);
int		fn(char *str, char *fin, int f, int j);
char	*ft_putnbr(int nb);
char	*ft_strstr(char *str, char *to_find);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
int		open_file(char *name);
void	close_file(int fileid);
int		count_symbols(char *name);
void	fill(char *str, char *name);
void	get_line_by_words(char *str);
int		atoi_me(char *num);
int		validate_from_0_to_99(char *str, char *num);
void	count_zeros(char *str, int length);
void	recursion_call(char *num, int length, int start_from, char *str_all);
void	find_num(char *str, char *num);
int		validate_input(char *input);
void	check_arg(char *file_name, char *arg);

#endif
