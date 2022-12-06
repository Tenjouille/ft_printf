NAME = libftprintf.a
SRC = ft_printf.c \
	  ft_printnbr.c \
	  ft_printletters.c \
	  ft_printptr.c
OBJ = $(SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ) ft_printf.h
	ar -rcs $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re