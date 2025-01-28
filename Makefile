# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lpaysant <lpaysant@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/04 13:55:51 by lpaysant          #+#    #+#              #
#    Updated: 2024/12/11 15:13:08 by lpaysant         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.Phony : clean fclean all re

CFLAGS = -Wall -Wextra -Werror -I./includes
NAME = libftprintf.a
CC = cc
LIBPATH = ./libft
LIBFT = $(LIBPATH)/libft.a
SRC = \
	ft_printf.c \
	printfunction.c

OBJ = $(SRC:.c=.o)

all : $(LIBFT) $(NAME)

$(NAME) : $(OBJ)
	cp libft/libft.a $(NAME)
	ar rcs $@ $^

$(LIBFT) :
	make -C $(LIBPATH) all

%.o : %.c Makefile ft_printf.h
	$(CC) -o $@ -c $< $(CFLAGS)

clean :
	rm -rf *.o
	make -C $(LIBPATH) clean
fclean : clean
	rm -f $(NAME)
	make -C $(LIBPATH) fclean
re : fclean all
