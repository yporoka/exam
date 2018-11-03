# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yporoka <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/01 15:40:51 by yporoka           #+#    #+#              #
#    Updated: 2018/07/01 15:52:52 by yporoka          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = split
CFLAGS = -Wall -Wextra -Werror
HEADER = ./split.h
OPTION = -c -I $(HEADERR)
SRC = main.c \
	  ft_split.c

OBJ  = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(HEADE)
	gcc -o $(NAME) $(CFLAGS) $(OBJ)

$(OBJ): %.o: %.c
	gcc -c $< -o $@ $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
