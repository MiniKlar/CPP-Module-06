# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lomont <lomont@student.42lehavre.fr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/12 02:01:35 by lomont            #+#    #+#              #
#    Updated: 2025/12/22 04:42:46 by lomont           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = convert

C++ = g++-15
CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -f

SRC = ./main.cpp \
		./utils.cpp \
		./ScalarConverter.cpp \

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(C++) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(C++) $(CFLAGS) -c $< -o $@

make: make all

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY : all clean fclean re
