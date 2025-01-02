# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chakaish <chakaish@student.42tokyo.jp      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/25 16:25:55 by chakaish          #+#    #+#              #
#    Updated: 2024/12/25 16:58:07 by chakaish         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

SRCS	= \
		ft_base.c ft_case_char_int.c ft_case_hexa.c ft_case_pointer_string.c \
		ft_case_unint.c ft_printf.c ft_putstr_lower.c
		\

OBJS	= $(SRCS:.c=.o)

CC		= cc
CFLAGS	= -Wall -Wextra -Werror
LIBFT	= ./libft/libft.a

AR		= ar rcs
RM		= rm -f

all:	${NAME}

${NAME}: ${OBJS}
		${MAKE} -C ./libft
		cp libft/libft.a ${NAME}
		${AR} ${NAME} ${OBJS}
		#${AR} ${NAME} $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	${MAKE} clean -C ./libft
	${RM} ${OBJS}
fclean: clean
	${MANE} fclean -C ./libft
	${RM} ${NAME}

re:		fclean all

.PHONY:	all clean fclean re
