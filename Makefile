###########################################################################
#### ARGUMENTS

NAME		= libftprintf.a
CC			= cc
CFLAGS		= -Wall -Werror -Wextra
AR 			= ar -rcs
INCLUDE		= ft_printf.h
LIBFT		= libft

###########################################################################
#### SOURCES

SRC_FILES	= ft_easyprint.c ft_printf.c ft_printhex.c ft_printptr.c \
ft_printui.c

OBJ_FILES	= $(SRC_FILES:.c=.o)

###########################################################################
#### RULES

$(NAME) : ${LIBFT} ${OBJ_FILES}
		${AR} ${NAME} ${LIBFT} ${OBJ_FILES}

%.o: %.c $(INCLUDE)
	$(CC) $(FLAGS) -I ./ -c $< -o $@

$(LIBFT):
		make -C $(LIBFT)


all : clean fclean 

clean :
	rm -f *.o

fclean : clean
	rm -f ${NAME}

re : fclean ${NAME}

.PHONY : bonus all clean fclean re