# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmurovts <dmurovts@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/06 14:02:06 by dmurovts          #+#    #+#              #
#    Updated: 2017/03/03 16:46:08 by dmurovts         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft
OBJFLAG = -c
SRC1 =	ft_atoi.c     ft_isprint.c  ft_memset.c  ft_strlcat.c  ft_strrchr.c \
		ft_bzero.c    ft_memccpy.c  ft_strcat.c  ft_strlen.c   ft_strstr.c \
		ft_isalnum.c  ft_memchr.c   ft_strchr.c  ft_strncat.c  ft_tolower.c \
		ft_isalpha.c  ft_memcmp.c   ft_strcmp.c  ft_strncmp.c  ft_toupper.c \
		ft_isascii.c  ft_memcpy.c   ft_strcpy.c  ft_strncpy.c  ft_isdigit.c  \
		ft_memmove.c  ft_strdup.c   ft_strnstr.c

SRC2 =  ft_memalloc.c 	ft_memdel.c		ft_strnew.c  	ft_strdel.c		ft_strclr.c \
		ft_striter.c  	ft_striteri.c	ft_strmap.c  	ft_strmapi.c	ft_strequ.c \
		ft_strnequ.c  	ft_strsub.c		ft_strjoin.c 	ft_strtrim.c	ft_strsplit.c \
		ft_itoa.c		ft_putchar.c 	ft_putstr.c  	ft_putendl.c	ft_putnbr.c \
		ft_putchar_fd.c	ft_putstr_fd.c	ft_putendl_fd.c ft_putnbr_fd.c

SRC3 =	ft_lstnew.c		ft_lstdelone.c	ft_lstdel.c		ft_lstadd.c		ft_lstiter.c \
		ft_lstmap.c     get_next_line.c

OBJS1 = $(SRC1:.c=.o)

OBJS2 = $(SRC2:.c=.o)

OBJS3 = $(SRC3:.c=.o)

OBJS = $(OBJS1) $(OBJS2) $(OBJS3)

PART1 = part1
PART2 = part2
PART3 = part3

all: $(NAME)

$(NAME): $(PART1) $(PART2) $(PART3) 
	ar rcv $(addsuffix .a, $(NAME)) $(OBJS)

$(PART1): $(OBJS1)

$(PART2): $(OBJS2)

$(PART3): $(OBJS3)

.c.o:
	$(CC) $(CFLAGS) $(OBJFLAG) $< -o $@ -I includes

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(addsuffix .a, $(NAME))
	
re: fclean all

.PHONY: fclean clean re all
