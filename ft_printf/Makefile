# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: enoviell <enoviell@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/08 17:09:59 by enoviell          #+#    #+#              #
#    Updated: 2023/04/05 13:20:46 by enoviell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS =	ft_printf.c \
		ft_utils.c \
		ft_printf_numbers.c \
		ft_printf_hexa.c \
		ft_printf_ptr.c \

OBJECTS = ${SRCS:.c=.o}

CC		= gcc
RM		= rm -f

CFLAGS = -Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} -g -c $< -o ${<:.c=.o}

$(NAME): ${OBJECTS}
		ar rcs ${NAME} ${OBJECTS}

all:	${NAME}

clean:
		${RM} ${OBJECTS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all
