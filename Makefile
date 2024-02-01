# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: khallal <khallal@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/01 12:58:19 by khallal           #+#    #+#              #
#    Updated: 2022/11/02 18:05:22 by khallal          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CFILES = ft_putchar_pf.c \
		 ft_putstr_pf.c \
		 ft_putnbr_pf.c \
		 ft_upphexadecimal.c \
		 ft_lowhexadecimal.c \
		 ft_hexadress.c \
		 ft_check.c \
		 ft_printf.c
CC = cc
FLAG = -Wall -Werror -Wextra
LI = ar -rcs
RM = rm -rf
OBJ = ${CFILES:.c=.o}

all : ${NAME}

${NAME} : ${OBJ}
	${LI} ${NAME} ${OBJ}

${OBJ} : 
	${CC} ${FLAG} -c  ${CFILES}

clean :
	${RM} ${OBJ}

fclean : clean
	${RM} ${NAME}
re : fclean all