# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldubok <ldubok@student.42warsaw.pl>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/10 21:55:15 by ldubok          #+#    #+#              #
#    Updated: 2026/08/11 13:57:09 by ldubok           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -g3

AR = ar rcs

SRC = 	ft_printf.c \
		ft_putnbr.c \
		ft_putunbr.c \
		ft_putstr.c \
		ft_putchar.c \

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

test: re
	$(CC) main.c libftprintf.a -o test
	rm -f $(OBJ) libftprintf.a

clean:
	rm -f $(OBJ)

fclean: clean 
	rm -f $(NAME) libftprintf.so test

re: fclean all

.PHONY: all clean fclean re breaker