# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: orakib <orakib@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/16 15:20:16 by orakib            #+#    #+#              #
#    Updated: 2023/02/21 18:46:33 by orakib           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long

BONUS = so_long_bonus

SRC = mandatory/free_matrix.c mandatory/ft_split2.c mandatory/main_func.c \
		mandatory/main.c mandatory/moves.c mandatory/parsing_backtrack.c \
		mandatory/parsing_utils.c mandatory/parsing.c mandatory/parsing2.c \
		mandatory/gnl/get_next_line.c mandatory/gnl/get_next_line_utils.c \
		mandatory/ft_printf/ft_printf.c mandatory/ft_printf/ft_printf_utils1.c \
		mandatory/ft_printf/ft_printf_utils2.c mandatory/delete.c
		
BNS_SRC = bonus/free_matrix_bonus.c bonus/ft_split2_bonus.c bonus/main_func_bonus.c \
		bonus/main_bonus.c bonus/moves_bonus.c bonus/parsing_backtrack_bonus.c \
		bonus/parsing_utils_bonus.c bonus/parsing_bonus.c bonus/parsing2_bonus.c \
		bonus/gnl/get_next_line.c bonus/gnl/get_next_line_utils.c \
		bonus/ft_itoa_bonus.c bonus/draw_coin_bonus.c \
		bonus/remove_coin_bonus.c bonus/enemy_bonus.c \
		bonus/ft_printf/ft_printf.c bonus/ft_printf/ft_printf_utils1.c \
		bonus/ft_printf/ft_printf_utils2.c bonus/delete_bonus.c

HEADER = mandatory/so_long.h

BNSHEADER = bonus/so_long_bonus.h

CC = gcc

CFLAGS = -Wall -Werror -Wextra

OBJ = $(SRC:.c=.o)

BNS_OBJ = $(BNS_SRC:.c=.o)

all: $(NAME)

bonus: $(BONUS)

$(BONUS): $(BNS_OBJ)
	$(CC) $(CFLAGS) -o $(BONUS) $(BNS_OBJ) MLX/libmlx42.a -lglfw -L"/Users/$(USER)/.brew/opt/glfw/lib/"

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) MLX/libmlx42.a -lglfw -L"/Users/$(USER)/.brew/opt/glfw/lib/"

mandatory/%.o: mandatory/%.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@
bonus/%.o: bonus/%.c $(BNSHEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ) $(BNS_OBJ)

fclean: clean
	@rm -f $(NAME) $(BONUS)

re: fclean all

.PHONY: all clean fclean re bonus