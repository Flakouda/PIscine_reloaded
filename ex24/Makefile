NAME = libft.a

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

FLAGS = -c -Wall -Werror -Wextra

HEADER = includes/

all : $(NAME)

$(NAME) :
	gcc $(FLAGS) $(SRC) -I $(HEADER)
	ar rc $(NAME) ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
	ranlib $(NAME)

clean :
	/bin/rm -f $(SRO)

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all
