# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssanei <ssanei@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/08 13:54:42 by ssanei            #+#    #+#              #
#    Updated: 2025/02/08 13:54:45 by ssanei           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = App

FLAGS = -Wall -Wextra -Werror -std=c++17

SRC = main.cpp  Utils.cpp

CXX = c++

all: $(NAME)

OBJ = $(SRC:.cpp=.o)

$(NAME): $(OBJ)
	$(CXX) $(FLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CXX) $(FLAGS) -c $< -o $@

fclean:
	$(RM) $(NAME) $(OBJ)

re: fclean all

.PHONY: all fclean re