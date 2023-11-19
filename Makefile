###########################################################################
#### ARGUMENTS

NAME		= libftprintf.a
CC			= cc
CFLAGS		= -Wall -Werror -Wextra
AR 			= ar -rcs

###########################################################################
#### SOURCES

SRC_FILES	= ft_easyprint.c ft_printf.c ft_printhex.c ft_printui.c

OBJ_FILES	= $(SRC_FILES:.c=.o)

###########################################################################
#### RULES

$(NAME) : ${OBJ_FILES}
		${AR} ${NAME} ${OBJ_FILES}

all : clean fclean

clean :
	rm -f *.o

fclean : clean
	rm -f ${NAME}

re : fclean ${NAME}

.PHONY : bonus all clean fclean re