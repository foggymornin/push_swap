NAME = push_swap

FLAGS = gcc -Wall -Wextra -Werror

SRC =	main.c \
		ft_error.c \
		a_operations.c \
		b_operations.c \
		ab_op.c \
		sort_under_five.c \
		push_in_b.c \
		push_in_a.c \
		allocate.c \
		utils.c \

all: $(NAME)

$(NAME):
		$(FLAGS) $(SRC) -o $(NAME)
clean:
		rm -f $(NAME)
fclean: clean

re: fclean all