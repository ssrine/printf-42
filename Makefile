# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nel-hark <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/09 15:58:11 by nel-hark          #+#    #+#              #
#    Updated: 2022/11/12 02:41:50 by nel-hark         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	ft_putchar.c\
		ft_putstr.c\
		ft_hexadecimal.c\
		ft_putnbr.c\
		ft_strlen.c\
		ft_forma.c\
		ft_putsigne.c\
		ft_printf.c\
		ft_adr.c\
	
		

NAME = libftprintf.a

CFLAGS = -Wall -Wextra -Werror

CC = cc

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):$(OBJ)
	ar -rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)

re: fclean all