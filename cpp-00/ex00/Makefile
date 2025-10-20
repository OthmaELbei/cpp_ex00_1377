# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/14 16:34:38 by oelbied           #+#    #+#              #
#    Updated: 2025/10/20 15:01:55 by oelbied          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = c++
CFLAGS = -Wall -Wextra -Werror
FILES = megaphone.cpp

OPJECT = $(FILES:.cpp=.o)

NAME = ex00

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
