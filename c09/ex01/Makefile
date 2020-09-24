SRCS = $(addprefix srcs/, ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c)

HEADERS = includes

OBJS = ${SRCS:.c=.o}

NAME = libft.a

CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

${NAME}:	${OBJS}
			ar -rcs ${NAME} ${OBJS}		
			ranlib ${NAME}

all:		${NAME}

.c.o:	${CC} ${CFLAGS} -I ${HEADER} -c $< -o ${<:.c=.o}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re: 		fclean all
