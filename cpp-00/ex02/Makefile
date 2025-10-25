# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/14 16:59:51 by oelbied           #+#    #+#              #
#    Updated: 2025/10/25 16:40:44 by oelbied          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



CC = c++ 
CFLAGS = -Wall -Wextra -Werror -std=c++98
FILES = Account.cpp tests.cpp

OPJECT = $(FILES:.cpp=.o)

NAME = Account

all : $(NAME)

$(NAME): $(OPJECT)
	$(CC) $(CFLAGS) $(OPJECT) -o $(NAME)

%.o: %.cpp Account.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OPJECT)
fclean: clean
	rm -f $(NAME)

re: fclean all 