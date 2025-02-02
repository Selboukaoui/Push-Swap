CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a

SRC = ft_lstadd_back_bonus.c ft_lstsize_bonus.c ft_strjoin.c ft_atoi.c  ft_lstadd_front_bonus.c ft_lstlast_bonus.c ft_lstnew_bonus.c  ft_split.c ft_strdup.c ft_strlen.c ft_isdigit.c

OBJ = $(SRC:.c=.o)


all: $(NAME)

$(NAME) : $(OBJ) 

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $<
	ar -r $(NAME) $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : clean