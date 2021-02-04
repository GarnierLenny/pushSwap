##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## make
##

SRC		=	src/list_man/list_len.c\
			src/list_man/new_list.c\
			src/list_man/pop_back.c\
			src/list_man/pop_front.c\
			src/list_man/push_front.c\
			src/list_man/push_back.c\
			src/list_man/print_list.c\
			src/options/swap.c\
			src/options/permute.c\
			src/options/rotate.c\
			src/list_man/sort.c\
			src/error_cases.c\
			src/check_order.c\
			src/get_in_list.c\


SRC_M	=	src/main.c

SRC_UT	=	tests/*.c

OBJ		=	$(SRC:.c=.o)

OBJ_M	=	$(SRC_M:.c=.o)

OBJ_UT	=	$(SRC_UT:.c=.o)

INCLUDE	=	-I./include -I../include -I../../include

NAME	=	pushSwap

NAME_UT	=	unit_tests

CFLAGS	=	-W -Werror -Wall -Wextra -I./include

CFLAGS_UT	=	-lcriterion --coverage -lgcov

LIB		=	-L lib/ -lmy

RM		=	rm -rf

all:		$(NAME)

$(NAME):	$(OBJ_M) $(OBJ)
		make -C lib/my/
		gcc -o $(NAME) $(OBJ) $(OBJ_M) $(INCLUDE) $(CFLAGS) $(LIB)

tests_run:	$(OBJ) $(OBJ_UT)
		make -C lib/my/
		gcc -o $(NAME_UT) $(SRC) $(SRC_UT) $(INCLUDE) $(CFLAGS_UT) $(LIB)
		./$(NAME_UT)
		gcovr -e tests

clean:
		$(RM) $(OBJ) $(OBJ_M) lib/my/*.o lib/libmy.a lib/my/libmy.a *gcno *gcda *~

fclean:		clean fclean_ut
		$(RM) $(NAME) tests/*.o

fclean_ut: clean
		$(RM) $(NAME_UT)

re:		fclean all