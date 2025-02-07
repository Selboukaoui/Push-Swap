CC = cc
CFLAGS = -Wall -Wextra -Werror -g -fsanitize=address
NAME = push_swap
BONUS_NAME = checker
LIB_NAME = libft.a

SRCLIB = libft/ft_lstadd_back_bonus.c libft/ft_lstsize_bonus.c libft/ft_strjoin.c libft/ft_atoi.c libft/ft_lstadd_front_bonus.c \
			libft/ft_lstlast_bonus.c libft/ft_lstnew_bonus.c libft/ft_split.c libft/ft_strdup.c libft/ft_strlen.c libft/ft_isdigit.c \
			libft/get_next_line.c libft/get_next_line_utils.c

SRC = check_args.c push_swap.c push_to.c reverse.c rotate.c sorting.c swap.c utils.c 
BONUS_SRC = bonus/check_args_bonus.c bonus/checker.c bonus/push_to_bonus.c bonus/reverse_bonus.c \
			bonus/rotate_bonus.c bonus/sorting_bonus.c bonus/swap_bonus.c bonus/utils_bonus.c

LIB_OBJ = $(SRCLIB:.c=.o)
OBJ = $(SRC:.c=.o)
BONUS_OBJ = $(BONUS_SRC:.c=.o)

all: $(LIB_NAME) $(NAME) 
bonus: $(LIB_NAME) $(BONUS_NAME)

$(LIB_NAME): $(LIB_OBJ)
	ar rcs $(LIB_NAME) $(LIB_OBJ)

$(NAME): $(OBJ) $(LIB_OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(LIB_NAME) -o $(NAME)

$(BONUS_NAME): $(BONUS_OBJ) $(LIB_NAME)
	$(CC) $(CFLAGS) $(BONUS_OBJ) $(LIB_NAME) -o $(BONUS_NAME)

%.o: %.c push_swap.h libft/libft.h libft/get_next_line.h
	$(CC) $(CFLAGS) -c $< -o  $@

libft/%.o: libft/%.c libft/libft.h
	$(CC) $(CFLAGS) -c $< -o $@

bonus/%.o: bonus/%.c bonus/checker.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(BONUS_OBJ) $(LIB_OBJ)

fclean: clean
	rm -f $(NAME) $(BONUS_NAME) $(LIB_NAME)

re: fclean all

.PHONY: clean

