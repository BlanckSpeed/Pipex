# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rodrigo <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/17 08:04:40 by rodrigo           #+#    #+#              #
#    Updated: 2024/12/17 08:09:10 by rodrigo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = pipex
CC      = gcc
FLAGS   = -Wall -Wextra -Werror
RM      = rm -rf

HEADER  = pipex.h
SRCS    = pipex.c childs.c error.c free.c \
          ft_strncmp.c ft_strdup.c ft_split.c ft_strjoin.c \
          gnl/get_next_line.c gnl/get_next_line_utils.c
OBJS    = $(SRCS:.c=.o)

%.o: %.c $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)
	@echo "$(NAME) created!"

all: $(NAME)

clean:
	$(RM) $(OBJS)
	@echo "Objects deleted!"

fclean: clean
	$(RM) $(NAME)
	@echo "All files deleted!"

re: fclean all

.PHONY: all clean fclean re

