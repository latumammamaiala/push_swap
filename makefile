# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cfavero <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/08 15:32:33 by cfavero           #+#    #+#              #
#    Updated: 2018/03/21 13:50:08 by cfavero          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME2 = checker

NAME = push_swap

FILEH = .

SOURCES = ft_get_list.c ft_print_stack.c ft_push.c ft_reverse.c \
				ft_rotate.c ft_swap.c push_swap.c ft_checker.c ft_usefull.c \
				ft_sorting_alg.c

OBJECTS = $(SOURCES:.c=.o)

ESE = ./a.out

all: $(NAME)

$(NAME):
	@make -C ./printf
	@gcc -I $(FILEH) -c -Wall -Wextra -Werror $(SOURCES) main_push_swap.c main_checker.c
	@gcc -I $(FILEH) -o $(NAME) $(OBJECTS) main_push_swap.c ./printf/libftprintf.a
	@gcc -I $(FILEH) -o $(NAME2) $(OBJECTS) main_checker.c ./printf/libftprintf.a
	@make clean

clean:
	@make clean -C ./printf
	@/bin/rm -f $(OBJECTS) main_push_swap.o main_checker.o

fclean: clean
	@make fclean -C ./printf
	@/bin/rm -f $(NAME) $(NAME2) ./printf/libftprintf.a

re: fclean all

.PHONY : all clean fclean re
