# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chakaish <chakaish@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/13 15:45:42 by chakaish          #+#    #+#              #
#    Updated: 2024/12/16 16:20:20 by chakaish         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

# Name of srcs
SRCS	= \
		ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
		ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
		ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
		ft_atoi.c ft_calloc.c ft_strdup.c \
		\
		ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
		ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
		ft_putendl_fd.c ft_putnbr_fd.c

OBJS	= ${SRCS:.c=.o}

# Compiler seting
CC		= cc
CFLAGS	= -Wall -Wextra -Werror

# Archive amd remove command
AR		= ar rcs
RM		= rm -f

#Default target
all:	${NAME}

${NAME}:	${OBJS}
		${AR} ${NAME} ${OBJS}

# Rule for cleaning object files
clean:
	${RM} ${OBJS}

# Rule for full clean
fclean:	clean
	${RM} ${NAME}

# Rule for re-build
re:		fclean all

# Phony targets
.PHONY:	all clean fclean re bonus
