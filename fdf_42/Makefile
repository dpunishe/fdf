# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dpunishe <dpunishe@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/07 18:16:15 by dpunishe          #+#    #+#              #
#    Updated: 2021/11/07 18:16:31 by dpunishe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

F_NAME = main.c  get_next_line.c parse.c draw.c map.c event_key.c
NAME		= fdf
CC			= gcc 
CFLAGS		= -Wall -Werror -Wextra
AFLAGS		= -fsanitize=address
INC			= -I./includes/

SRCS		= $(addprefix src/, $(F_NAME))
OBJS 		= $(addprefix build/, $(F_NAME:.c=.o))

LIBFT		= ./libft/libft.a
LIBFTINC	= -I./libft/includes/
LIBFTLINK	= -L./libft/ -lft

LIBMLX		= ./minilibx_macos/libmlx.a
LIBMLXINC	= -I./minilibx_macos/
LIBMLXLINK	= -L./minilibx_macos -lmlx -framework OpenGL -framework AppKit -I minilibx_macos

all: libft $(NAME) clean

build:
	mkdir $@

build/%.o: srcs/%.c | build
	$(CC) $(AFLAGS) $(CFLAGS) $(INC) $(LIBFTINC) $(LIBMLXINC) -o $@ -c $<

libft: $(LIBFT)

$(LIBFT):
	make -C ./libft

libmlx: $(LIBMLX)

$(LIBMLX):
	make -C ./minilibx_macos

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(AFLAGS) $(INC) $(LIBFTLINK) $(LIBMLXLINK) -o $@ $^

clean:
	rm -rf build/

fclean: clean
	rm -f $(NAME)

re: fclean all
