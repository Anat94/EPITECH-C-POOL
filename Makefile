##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

NAME	= a.out

SRC		=	my_print_alpha.c \

OBJ		= $(SRC:.c=.o)

CFLAGS		= -Wall -Wextra -g

CPPFLAGS	= -iquote ./include

LDFLAGS		= lib/*.c

all: $(NAME)

$(NAME): $(OBJ)
	gcc $(OBJ) -o $(NAME)

tests_run:
	gcc -o unit_tests  bsq.c calcul_map.c find_square.c test/test_bsq.c $(CFLAGS) $(CPPFLAGS) $(LDFLAGS) --coverage -lcriterion
	./unit_tests

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean rean all

