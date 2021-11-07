DIR_SRC	=	./src/

SRCS	=	${DIR_SRC}main.c

OBJS	=	${SRCS:.c=.o}

CC	=	gcc

FLAGS	=	-Wall -Wextra -Werror

NAME	=	pass

RM	=	rm -f

LIB	=	-lft


.c.o:
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
	${CC} ${FLAGS} -o ${NAME} ${OBJS} -L. -lft

all:		${NAME}

clean:
	${RM} ${OBJS}

fclean:		clean
	${RM} ${NAME}

re:		fclean all
