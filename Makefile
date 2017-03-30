# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmurovts <dmurovts@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/29 12:29:11 by dmurovts          #+#    #+#              #
#    Updated: 2017/03/30 11:12:47 by dmurovts         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = wolf3d

HEAD = includes/

VPATH = srcs:includes

FLAGS = -O3 -Wall -Wextra -Werror -I $(HEAD)

MLX = -lmlx -framework AppKit -framework OpenGl

SRCS = main.c									\
		read.c 									\

BINS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(BINS)
	 make re -C libft/ fclean && make -C libft/
	gcc -o $(NAME) -I libft/includes $(BINS) $(FLAGS) -L. libft/libft.a $(MLX)

%.o: %.c
	gcc -I libft/includes $(FLAGS) -c -o $@ $<

clean:
	/bin/rm -f $(BINS) && make -C libft/ fclean

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
