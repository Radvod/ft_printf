# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcathery <mcathery@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/09 16:52:53 by mcathery          #+#    #+#              #
#    Updated: 2020/07/14 14:29:48 by hgalazza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
FLAGS = -Wall -Wextra -Werror
HEAD = ft_printf.h
INCLUDES = ./

FILES = ft_printf digit_work ft_ftoa itoa_base string_ft work_s_c work_specifications work_variable

SRCS = $(addsuffix .c, $(FILES))
OBJS = $(addsuffix .o, $(FILES))

all: $(NAME)

$(NAME):
	@make -C libft/ re
	gcc $(FLAGS) -I$(INCLUDES) -c $(SRCS)
	ar -rc $(NAME) $(OBJS) libft/*.o
	ranlib $(NAME)

clean:
	@make -C libft/ clean
	@rm -rf $(OBJS)

fclean: clean
	@make -C libft/ fclean
	@rm -rf $(NAME)

re: fclean all

.PHONY = all clean fclean re