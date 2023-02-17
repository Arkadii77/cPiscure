# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hrahovha <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/15 13:40:55 by hrahovha          #+#    #+#              #
#    Updated: 2022/10/18 19:08:47 by amaryan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

M = main.c
NAME = rush02

$(NAME) : main.o function1.o function2.o function3.o owr.o
	cc main.o function1.o function2.o function3.o  owr.o -o $(NAME)

main.o : $(M)
	cc -c $(M) -o main.o
function1.o : function1.c
	cc -c function1.c -o function1.o
function2.o : function2.c
	cc -c function2.c -o function2.o
function3.o : function3.c
	cc -c function3.c -o function3.o
owr.o : owr.c
	cc -c owr.c -o owr.o
clean :
	rm -f *.o
fclean : clean
	rm -f $(NAME)
