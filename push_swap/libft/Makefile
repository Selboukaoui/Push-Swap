CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a

SRCLIB = ft_lstadd_back_bonus.c ft_lstsize_bonus.c ft_strjoin.c ft_atoi.c ft_lstadd_front_bonus.c \
			ft_lstlast_bonus.c ft_lstnew_bonus.c ft_split.c ft_strdup.c ft_strlen.c ft_isdigit.c get_next_line.c get_next_line_utils.c grb_coll.c

OBJS = $(SRCLIB:.c=.o)
$(NAME) : $(OBJS) 

all: $(NAME)

%.o: %.c libft.h get_next_line.h
	$(CC) $(CFLAGS) -c $<
	ar -r $(NAME) $@

bonus : $(OBJB)

clean:
	rm -f $(OBJS) 

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : clean