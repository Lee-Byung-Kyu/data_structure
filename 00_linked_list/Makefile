NAME = linked_list
SRC = main.c\
			access_node_at_k_th.c\
			add_node_at_beginnig.c\
			add_node_at_end.c\
			add_node_at_k_th.c\
			delete_node_at_k_th.c\
			get_list_size.c\
			clear_list.c

OBJ = $(SRC:.c=.o)
CC = gcc
#CFLAGS = -Wall -Wextra -Werror
RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
