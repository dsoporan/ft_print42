# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dsoporan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/05 14:46:56 by dsoporan          #+#    #+#              #
#    Updated: 2017/05/05 14:47:08 by dsoporan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FLAGS = -Wall -Werror -Wextra

CC = gcc $(FLAGS)

SRCS = srcs/*.c \
	   libft/*.c

OBJ = *.o

all: $(NAME)

$(NAME):
	@$(CC) -c $(SRCS) -I./includes
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME) printf

re: fclean all
