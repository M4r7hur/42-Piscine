# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: armendes <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/10 09:36:25 by armendes          #+#    #+#              #
#    Updated: 2020/08/17 16:02:30 by armendes         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= $(addprefix ${FOLDER}/, ft_putchar.c ft_strlen.c ft_swap.c ft_putstr.c ft_strcmp.c)

HEADER	= includes

FOLDER	= srcs

OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

RM		= rm -f

%.o: %.c
			${CC} -c ${CFLAGS} -o $@ $< -I ${HEADER}

all:		${NAME}

${NAME}:	${OBJS}
			ar -rcs ${NAME} ${OBJS}

clean:	
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean
			all

.PHONY:		all clean fclean re
