# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tngwenya <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/28 12:51:39 by tngwenya          #+#    #+#              #
#    Updated: 2018/05/28 13:04:15 by tngwenya         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCC = *.c
SRCO = *.o
FLAGS = -c -Wall -Wextra -Werror -I
HEADER = libft.h

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(HEADER) $(SRCC)
	ar -rc $(NAME) $(SRCO)

clean:
	rm -rf $(SRCO)

fclean: clean
	rm -rf $(NAME)

re: fclean all
