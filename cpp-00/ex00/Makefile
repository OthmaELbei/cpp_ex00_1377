# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/14 16:34:38 by oelbied           #+#    #+#              #
#    Updated: 2025/10/25 16:41:02 by oelbied          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
FILES = megaphone.cpp

OPJECT = $(FILES:.cpp=.o)

NAME = megaphone

all : $(NAME)

$(NAME): $(OPJECT)
	$(CC) $(CFLAGS) $(OPJECT) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OPJECT)
fclean: clean
	rm -f $(NAME)

re: fclean all 
