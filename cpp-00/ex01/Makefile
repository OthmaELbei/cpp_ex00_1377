# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/14 16:34:20 by oelbied           #+#    #+#              #
#    Updated: 2025/10/14 16:42:47 by oelbied          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = g++
CFLAGS = -Wall -Wextra -Werror
FILES = all_fn_ex01.cpp ex01.cpp

OPJECT = $(FILES:.cpp=.o)

NAME = ex01

all : $(NAME)

$(NAME): $(OPJECT)
	$(CC) $(CFLAGS) $(OPJECT) -o $(NAME)

%.o: %.cpp ex01.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OPJECT)
fclean: clean
	rm -f $(NAME)

re: fclean all 