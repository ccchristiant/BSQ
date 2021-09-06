##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## ctran
##

SRC	=	$(SRCDIR)fs_open_file.c		\
		$(SRCDIR)fs_length_first_line.c		\
		$(SRCDIR)fs_get_number_from_first_line.c	\
		$(SRCDIR)load_file_in_mem.c		\
		$(SRCDIR)line_length.c	\
		$(SRCDIR)search_square.c	\
		$(SRCDIR)put_x.c	\
		$(SRCDIR)put_square.c	\
		$(SRCDIR)update_map.c	\
		$(SRCDIR)check_min.c	\
		$(SRCDIR)bsq.c		\
		$(SRCDIR)main.c

OBJ	=	$(SRC:.c=.o)

TEST	=	$(TESTDIR)tests_bsq.c

SRCDIR	=	src/

TESTDIR	=	tests/

BINTEST	=	unit_tests

CC	=	gcc

CFLAGS	=	-Wall -Wextra

CPPFLAGS	=	-Iinclude -g3

LDFLAGS	=	-Llib/my

LDLIBS	=	-lm -lmy -lcriterion

NAME	=	bsq

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C lib/my
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS) $(LDLIBS) $(CPPFLAGS)

unit_tests:	fclean $(NAME)
	$(CC) -o $(BINTEST) $(OBJ) $(LDFLAGS) $(LDLIBS) $(CPPFLAGS)

run_tests:	$(NAME)
	./$(BINTEST)

clean:
	make -C lib/my clean
	rm -f $(OBJ)

fclean:	clean
	make -C lib/my fclean
	rm -f $(NAME) $(BINTEST)

re:	fclean all

.PHONY: all clean fclean re
