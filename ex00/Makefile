# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bmelo <bmelo@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/11/13 22:23:36 by bmelo             #+#    #+#              #
#    Updated: 2026/11/19 10:44:33 by bmelo            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex00
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
SRCS = main.cpp ScalConv.cpp
OBJ = ${SRCS:.cpp=.o}

all : ${NAME}
		@clear

${NAME} : ${OBJ}
	${CXX} ${CXXFLAGS} -o ${NAME} ${OBJ}

clean :
	rm -f ${OBJ}
fclean : clean
	rm -rf ${NAME}
	@clear
re : fclean all