# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bmelo <bmelo@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/11/14 06:52:33 by bmelo             #+#    #+#              #
#    Updated: 2026/11/14 07:17:45 by bmelo            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex02
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
SRCS = main.cpp Base.cpp
OBJ = ${SRCS:.cpp=.o}

all : ${NAME}
	@clear

${NAME} : ${OBJ}
	${CXX} ${CXXFLAGS} -o ${NAME} ${OBJ}

clean :
	rm -rf ${OBJ}
fclean : clean
	rm -rf ${NAME}
	@clear
re : fclean all