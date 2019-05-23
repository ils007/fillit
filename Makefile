# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbritni <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/22 12:33:09 by lbritni           #+#    #+#              #
#    Updated: 2019/05/22 12:33:31 by lbritni          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

OUT = *.o
SRC = main.c ft_read.c ft_createlist.c libft/ft_strlen.c libft/ft_memcpy.c libft/ft_lstnew.c libft/ft_memalloc.c libft/ft_bzero.c code.c libft/ft_lstdel.c ft_freetetri.c backtracking.c libft/ft_memset.c libft/ft_strjoin.c libft/ft_strnew.c libft/ft_strcat.c libft/ft_strcpy.c

all: $(NAME)

$(NAME):
		gcc -Wall -Wextra -Werror -o fillit $(SRC)

clean:
		/bin/rm -f $(OUT)

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all
