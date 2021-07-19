# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/13 12:31:55 by rbourgea          #+#    #+#              #
#    Updated: 2021/07/17 13:18:40 by rbourgea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 		Bureaucrat

SRCS =		ShrubberyCreationForm.cpp \
			RobotomyRequestForm.cpp \
			PresidentialPardonForm.cpp \
			Form.cpp \
			Bureaucrat.cpp \
			main.cpp

OBJS = 		$(SRCS:%.cpp=%.o)

INC			= -I./

CFLAGS =	-Wall -Wextra -Werror -std=c++98

all:		$(NAME)

$(NAME):	$(OBJS)
			clang++ $(CFLAGS) $(INC) $(OBJS) -o $(NAME)

clean:		
			rm -rf $(OBJS)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all