# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcathery <mcathery@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/09 16:52:53 by mcathery          #+#    #+#              #
#    Updated: 2019/12/09 18:20:53 by mcathery         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
FLAGS = -Wall -Wextra -Werror
HEAD = printf.h

FILES = main ft_printf

SRCS = $(addsuffix .c, $(FILES))
OBJS = $(addsuffix .o, $(FILES))

all: $(NAME)

$(NAME): $(OBJS)
	@gcc $(FLAGS) -o $(NAME) $(OBJS)

%.o: %.c $(HEAD)
	@gcc $(FLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY = all clean fclean re