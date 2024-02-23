SRC = ft_address.c ft_printf.c ft_putchar.c ft_putnbr.c ft_putnbr_hex.c ft_putnbr_unsigned.c ft_putstr.c
OBJ = ${SRC:.c=.o}
NAME = libftprintf.a

all : ${NAME}

%.o : %.c
		gcc -Wall -Werror -Wextra -o $@ -c $<

${NAME} : ${OBJ}
	ar rc ${NAME} ${OBJ}
clean :
		rm -f ${OBJ}

fclean : clean
		rm -f ${NAME}

re : fclean all
