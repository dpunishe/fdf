# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dpunishe <dpunishe@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/07 18:17:05 by dpunishe          #+#    #+#              #
#    Updated: 2021/11/07 18:17:32 by dpunishe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = *.c

INCLUDES = libft.h

OBJECTS = *.o

all:    $(NAME)

$(NAME): 
	@gcc -Wall -Wextra -Werror -I $(INCLUDES) -c $(SRCS)
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)

clean:
	@rm -f $(OBJECTS)

fclean:	clean
	@rm -f $(NAME)

re:	fclean all
