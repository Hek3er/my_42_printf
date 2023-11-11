CC = cc
AR = ar rcs
CFLAGS = -Wall -Werror -Wextra
NAME = libftprintf.a

SRC =	ft_print_digit.c ft_print_lhex.c ft_print_p.c ft_print_uhex.c \
		ft_print_unsigned.c ft_printf.c ft_putchar.c ft_putstr.c ft_strlen.c

COBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME): $(COBJ)
	$(AR) $@ $(COBJ)

%.o : %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(COBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all