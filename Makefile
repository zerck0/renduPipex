# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tgeorgin <tgeorgin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/14 18:57:39 by tgeorgin          #+#    #+#              #
#    Updated: 2022/01/24 15:46:18 by tgeorgin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = pipex

CC = gcc
FLAGS = -Wextra -Werror -Wall

LIBFT_A = libft.a
LIBF_DIR = libft/
LIBFT  = $(addprefix $(LIBF_DIR), $(LIBFT_A))

HEADER	= -I./includes/
SRC_DIR = src/

SRC_FILES = pipex.c utils.c init.c
OBJS = $(SRC_FILES:.c=.o)
OBJS_F	= _objFiles/

SRCS_BONUS		=	bonus/pipex_bonus.c \
					bonus/utils_bonus.c \
					bonus/init_bonus.c	\

OBJS_BONUS	=	$(SRCS_BONUS:%.c=%.o)

all: $(NAME)

$(NAME): 

			@echo "     - Creating object directory..." 
					@mkdir -p $(OBJS_F)
					@echo "     - Making object files..." 
					$(CC) $(FLAGS) -c $(addprefix $(SRC_DIR), $(SRC_FILES))
					@echo "     - Moving object files to $(OBJS_F)..." 	
					@mv $(OBJS) $(OBJS_F)
					@echo "     - Compiling Libft..." 
					@make -C $(LIBF_DIR)
					@echo "     - Compiling $(NAME)..." 
					$(CC) $(FLAGS) $(addprefix $(OBJS_F), $(OBJS)) $(LIBFT) -o $(NAME)
					@echo "- Pipex Compiled -"

bonus:		$(OBJS_BONUS) $(LIBFT)
			$(CC) $(OBJS_BONUS) $(LIBFT) $(CFLAGS) -o $(NAME)

clean:
					@make clean -C ./libft
					@rm -rf $(OBJS_F)
					@rm -f ${OBJS_BONUS} ${OBJS}

fclean: 	clean
					@make -C $(LIBF_DIR) fclean
					@rm -f $(NAME)
					@rm -f $()

re:			fclean all