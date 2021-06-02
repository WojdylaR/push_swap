NAME = push_swap

FLAGS = -Wall -Wextra -Werror

CC = gcc #-g3 -fsanitize=address

LIBFT = libft/libft.a

HEADER = include/push_swap.h

SRCS =	src/push_swap.c \
		src/init_tab.c \
		src/error.c \
		src/ft_s.c \
		src/ft_p.c \
		src/ft_r.c \
		src/ft_rr.c \
		src/sort_lst.c \
		src/sort_sort_s.c \
		src/big_sort.c \


OBJS = $(SRCS:.c=.o)


all: $(NAME)

%.o: %.c $(HEADER)
	gcc $(FLAGS) -c $< -o $@

$(NAME): $(OBJS) $(HEADER)
	$(MAKE) -C libft
	$(CC) $(OBJS) -I $(HEADER) $(FLAGS) $(LIBFT) -o $(NAME)

clean:
	rm -f $(OBJS)
	make clean -C libft

fclean: clean
	rm -f $(NAME)
	make fclean -C libft

re: fclean all

.PHONY: fclean re all clean