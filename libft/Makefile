# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tgeorgin <tgeorgin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/21 14:01:37 by tgeorgin          #+#    #+#              #
#    Updated: 2022/01/24 15:57:00 by tgeorgin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
LIB = ar -rcs
RM = rm -rf

INCLUDE = .

SRCS = ft_isalpha.c	\
			ft_isdigit.c	\
			ft_tolower.c	\
			ft_toupper.c 	\
			ft_isalnum.c	\
			ft_isascii.c	\
			ft_isprint.c	\
			ft_atoi.c		\
			ft_memset.c		\
			ft_bzero.c		\
			ft_memcpy.c		\
			ft_memccpy.c	\
			ft_memmove.c	\
			ft_memchr.c		\
			ft_memcmp.c		\
			ft_strlen.c		\
			ft_strchr.c 	\
			ft_strcmp.c		\
			ft_strncmp.c 	\
			ft_strrchr.c 	\
			ft_strlcpy.c 	\
			ft_strlcat.c 	\
			ft_strnstr.c 	\
			ft_calloc.c 	\
			ft_strdup.c 	\
			ft_putchar_fd.c \
			ft_putstr_fd.c	\
			ft_putstr.c		\
			ft_putendl_fd.c	\
			ft_putnbr_fd.c	\
			ft_split.c		\
			ft_itoa.c		\
			ft_strjoin.c	\
			ft_strmapi.c	\
			ft_putchar.c	\
			ft_substr.c		\
			ft_strtrim.c	\
			ft_uitoa.c		\
			ft_ullen.c		\
			ft_ultoa_base.c	\
			ft_putnbr_base.c\
			get_next_line_utils_bonus.c\
			get_next_line_bonus.c\
			ft_printf/ft_printf.c\
			ft_printf/srcs/flag_c.c\
			ft_printf/srcs/flag_s.c\
			ft_printf/srcs/flag_di.c\
			ft_printf/srcs/flag_p.c\
			ft_printf/srcs/flag_u.c\
			ft_printf/srcs/flag_x.c\
			ft_printf/srcs/flag_pourcent.c\

SRCSB = ft_lstnew.c	\
			ft_lstadd_front.c\
			ft_lstsize.c	\
			ft_lstlast.c	\
			ft_lstadd_back.c\
			ft_lstdelone.c	\
			ft_lstclear.c	\
			ft_lstclear.c	\
			ft_lstiter.c	\
			ft_lstmap.c 	\

OBJS = $(SRCS:.c=.o)

BONUS_OBJS = $(SRCSB:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(LIB) $(NAME) $(OBJS)

.c.o:
	$(CC) $(CFLAGS) -I$(INCLUDE) -c $< -o $(<:.c=.o)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

bonus: $(OBJS) $(BONUS_OBJS)
	$(LIB) $(NAME) $(OBJS) $(BONUS_OBJS)
		
.PHONY:		all clean fclean re