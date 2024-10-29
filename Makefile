NAME = libft.a

SOURCES = 			\
	ft_strlen.c 	\
	ft_isdigit.c 	\
	ft_isprint.c 	\
	ft_isalpha.c 	\
	ft_isascii.c 	\
	ft_isalnum.c 	\
	ft_memset.c 	\
	ft_strlen.c 	\

OBJECTS = $(SOURCES:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) -r $@ $?

%.o: %.c
	$(CC) -c $(CFLAGS) $?

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re