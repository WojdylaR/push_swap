NAME = push_swap

FLAGS = -Wall -Wextra -Werror

CC = gcc

LIBFT = libft/libft.a

HEADER = include/push_swap.h

SRCS =	src/checker.c \
		src/init_tab.c \
		src/error.c \
		src/ft_s.c \
		src/ft_p.c \
		src/ft_r.c \
		src/ft_rr.c


OBJS = $(SRCS:.c=.o)


all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
	$(MAKE) -C libft
	$(CC) $(HEADER) $(FLAGS) $(OBJS) $(LIBFT) -o ${NAME}

clean:
	rm -f $(OBJS)
	make clean -C libft

fclean: clean
	rm -f $(NAME)
	make fclean -C libft

re: fclean all

.PHONY: fclean re norme all clean