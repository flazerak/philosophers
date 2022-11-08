# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flazerak <flazerak@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/04 11:25:00 by flazerak          #+#    #+#              #
#    Updated: 2022/11/04 12:02:36 by flazerak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= philo

CC		:= gcc
SRC_DIR	:= src
SRC		:= $(wildcard $(SRC_DIR)/*.c)

OBJ_DIR	:= obj
OBJ		:= $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

CFLAGS	:=  -Wall -Wextra -Werror -pthread 

all : $(NAME)

$(NAME): $(OBJ_DIR) $(OBJ) include/philo.h
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -rf $(NAME) $(OBJ_DIR)

re:	clean all