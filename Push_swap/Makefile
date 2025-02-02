CC = cc
CFLAGS = -Wall -Wextra -Werror 
NAME = push_swap

SRC = check_args.c push_swap.c push_to.c reverse.c rotate.c sorting.c swap.c utils.c
OBJ = $(SRC:.c=.o)
LIBFT = libft/libft.a 

all: $(NAME) $(LIBFT)

$(NAME) : $(OBJ) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME) $(LIBFT)

$(LIBFT):
	make -C libft

%.o: %.c push_swap.h
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OBJ) 
	make -C libft clean


fclean: clean
	rm -f $(NAME)
	make -C libft fclean
re: fclean all 

.PHONY : clean