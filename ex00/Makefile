#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: npita-si <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/09/20 16:58:00 by npita-si          #+#    #+#              #
#    Updated: 2015/09/20 18:46:25 by npita-si         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = colle-2 
NAME00 = colle-00
NAME01 = colle-01
NAME02 = colle-02
NAME03 = colle-03
NAME04 = colle-04

SRC = srcs/colle00.c srcs/colle01.c srcs/colle02.c \
	  srcs/colle03.c srcs/colle04.c srcs/ft_putchar.c srcs/main.c
SRCO = colle00.c colle01.o colle02.o colle03.o colle04.o \
	   main.o ft_putchar.o

all: $(NAME)

$(NAME):
		gcc -c -Wall -Wextra -Werror $(SRC)
		gcc -o -Wall -Wextra -Werror $(NAME00) colle00.o main.o ft_putchar.o
		gcc -o -Wall -Wextra -Werror $(NAME01) colle01.o main.o ft_putchar.o
		gcc -o -Wall -Wextra -Werror $(NAME02) colle02.o main.o ft_putchar.o
		gcc -o -Wall -Wextra -Werror $(NAME03) colle03.o main.o ft_putchar.o
		gcc -o -Wall -Wextra -Werror $(NAME04) colle04.o main.o ft_putchar.o

clean:
		/bin/rm -f $(SRCO)

fclean: clean
		/bin/rm -f $(NAME) $(NAME01) $(NAME02) $(NAME03) $(NAME04)

re: fclean all