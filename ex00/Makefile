# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/13 12:31:55 by rbourgea          #+#    #+#              #
#    Updated: 2021/07/13 12:36:51 by rbourgea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 		Bureaucrat

SRCS =		Bureaucrat.hpp \
			Bureaucrat.cpp \
			main.cpp

OBJS = 		$(SRCS:%.c=%.o)

CFLAGS =	-Wall -Wextra -Werror -std=c++98

all:		$(NAME)

$(NAME):	$(OBJS)
			clang++ $(CFLAGS) -o $(NAME) $(OBJS)

clean:		
			rm -rf $(OBJS)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all