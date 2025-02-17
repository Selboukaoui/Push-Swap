CC = cc
CFLAGS = -Wall -Wextra -Werror 
NAME = push_swap
BONUS_NAME = checker
LIBFT = libft/libft.a
HEADERS = libft/libft.h libft/get_next_line.h

SRC = check_args.c push_swap.c push_to.c reverse.c rotate.c sorting.c swap.c utils.c

SRCLIB = libft/ft_lstadd_back_bonus.c libft/ft_lstsize_bonus.c libft/ft_strjoin.c libft/ft_atoi.c libft/ft_lstadd_front_bonus.c \
			libft/ft_lstlast_bonus.c libft/ft_lstnew_bonus.c libft/ft_split.c libft/ft_strdup.c libft/ft_strlen.c libft/ft_isdigit.c libft/get_next_line.c libft/get_next_line_utils.c libft/grb_coll.c

BONUS_SRC = bonus/check_args_bonus.c bonus/checker_bonus.c bonus/push_to_bonus.c bonus/reverse_bonus.c \
			bonus/rotate_bonus.c bonus/do_moves_bonus.c bonus/swap_bonus.c bonus/utils_bonus.c

OBJ = $(SRC:.c=.o)
BONUS_OBJ = $(BONUS_SRC:.c=.o)

all:  $(LIBFT) $(NAME) 
bonus:  $(LIBFT) $(BONUS_NAME) 

$(NAME): $(OBJ) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)

$(BONUS_NAME): $(BONUS_OBJ) $(LIBFT) 
	$(CC) $(CFLAGS) $(BONUS_OBJ) $(LIBFT) -o $(BONUS_NAME)

%.o: %.c push_swap.h $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o  $@

$(BONUS_OBJ): $(HEADERS) bonus/checker_bonus.h

bonus/%.o:
	$(CC) $(CFLAGS) -c $< -o $@


$(LIBFT): $(SRCLIB) $(HEADERS)
	make -C libft/ 


clean:
	rm -f $(OBJ) $(BONUS_OBJ) 
	make -C libft clean
fclean: clean
	rm -f $(NAME) $(BONUS_NAME) 
	make -C libft/ fclean

re: fclean all
.PHONY: clean

