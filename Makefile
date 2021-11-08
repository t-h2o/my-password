DIR_SRC	=	./src/
DIR_BIN	=	./bin/

SRCS	=	${DIR_SRC}main.c ${DIR_SRC}ft_atoi.c \
			${DIR_SRC}ft_isdigit.c ${DIR_SRC}ft_strdup.c \
			${DIR_SRC}ft_strlcpy.c ${DIR_SRC}ft_strlen.c \
			${DIR_SRC}ft_substr.c

OBJS	=	${SRCS:.c=.o}

CC	=	gcc

FLAGS	=	-Wall -Wextra -Werror

NAME	=	pass

RM	=	rm -f

LIB	=	-lft


.c.o:
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
	${CC} ${FLAGS} -o ${DIR_BIN}${NAME} ${SRCS} 

all:		${NAME}

clean:
	${RM} ${OBJS}

fclean:		clean
	${RM} ${DIR_BIN}${NAME}

re:		fclean all
