# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: erucquoy <erucquoy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/10 18:18:08 by erucquoy          #+#    #+#              #
#    Updated: 2017/04/12 19:31:54 by erucquoy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wextra -Werror -Wall

all: $(NAME)

$(NAME):
	gcc -c ft_*.c $(FLAGS)
	ar rc $(NAME) ft_*.o
	ranlib $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all