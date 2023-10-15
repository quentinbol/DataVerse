##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## true
##

NAME = DataVerse

STACK = ./Stack

LINKED_LIST = ./Linked_List

GRAPH = ./Graph

SRC += main.c

SRC += $(STACK)/stackInit.c
SRC += $(STACK)/stackState.c
SRC += $(STACK)/stackHandling.c
SRC += $(STACK)/stackViz.c

SRC += $(LINKED_LIST)/listHandling.c
SRC += $(LINKED_LIST)/listViz.c

SRC += $(GRAPH)/graphHandling.c
SRC += $(GRAPH)/graphViz.c

CFLAGS = -I./include -W -Wextra -Wall -Werror

OBJ = $(SRC:.c=.o)

CC = gcc

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) -g $(GRAPHLIB)
	@echo -e "\033[1;32m[$(NAME)]: Compiled !\033[0m"
	@echo -e "\033[1;32mCompiled $(shell echo "$?" | wc -w) file(s)\033[0m"

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
	@echo -e "\033[1;36m[$(NAME)]: All cleaned !\033[0m"

fclean: clean
	rm -f $(NAME)

re: fclean all

test_clean :
	rm -f *.gcno
	rm -f *.gcda
	rm units_test

.PHONY: clean fclean re test test_clean
