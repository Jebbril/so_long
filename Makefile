# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: orakib <orakib@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/16 15:20:16 by orakib            #+#    #+#              #
#    Updated: 2023/02/16 17:49:36 by orakib           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long

BONUS = so_long_bonus

SRC = mandatory/free_matrix.c mandatory/ft_split2.c mandatory/main_func.c \
		mandatory/main.c mandatory/moves.c mandatory/parsing_backtrack.c \
		mandatory/parsing_utils.c mandatory/parsing.c mandatory/parsing2.c \
		mandatory/gnl/get_next_line.c mandatory/gnl/get_next_line_utils.c \
		mandatory/ft_printf/ft_printf.c mandatory/ft_printf/ft_printf_utils1.c \
		mandatory/ft_printf/ft_printf_utils2.c
		
BNS_SRC = bonus/free_matrix.c bonus/ft_split2.c bonus/main_func.c \
		bonus/main.c bonus/moves.c bonus/parsing_backtrack.c \
		bonus/parsing_utils.c bonus/parsing.c bonus/parsing2.c \
		bonus/gnl/get_next_line.c bonus/gnl/get_next_line_utils.c \
		bonus/ft_printf/ft_printf.c bonus/ft_printf/ft_printf_utils1.c \
		bonus/ft_printf/ft_printf_utils2.c bonus/ft_itoa.c
		

HEADER = mandatory/so_long.h

BNSHEADER = bonus/so_long.h

CC = gcc

CFLAGS = -Wall -Werror -Wextra

OBJ = $(SRC:.c=.o)

BNS_OBJ = $(BNS_SRC:.c=.o)

all: $(NAME)

bonus: $(BONUS)

$(BONUS): $(BNS_OBJ)
	$(CC) $(CFLAGS) -o $(BONUS) $(BNS_OBJ) libmlx42.a -lglfw -L"/Users/orakib/.brew/opt/glfw/lib/"

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) libmlx42.a -lglfw -L"/Users/orakib/.brew/opt/glfw/lib/"

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ) $(BNS_OBJ)

fclean: clean
	@rm -f $(NAME) $(BNS)

re: fclean all

.PHONY: all clean fclean re