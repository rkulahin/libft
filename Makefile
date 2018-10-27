#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rkulahin <rkulahin@student.unit.ua>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/23 18:31:25 by rkulahin          #+#    #+#              #
#    Updated: 2018/10/23 18:31:27 by rkulahin         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME=libft.a
SRCS=srcs/*.c
OBJECTS=*.o
HEADERS_FOLDER=includes/

all: $(NAME)

$(NAME):
	gcc -I$(HEADERS_FOLDER) -c $(SRCS) -Wall -Wextra -Werror
	ar -rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

main: re
	/bin/rm -f *.o
	gcc -L. -lft main.c
	find * -type f -name "*~" -delete -o -type f -name "#*#" -delete
	./a.out