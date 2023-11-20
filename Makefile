###########################################################################
#### ARGUMENTS

NAME		= libftprintf.a
CC			= cc
CFLAGS		= -Wall -Werror -Wextra
AR 			= ar -rcs
INCLUDE		= /include/ft_printf.h

###########################################################################
#### SOURCES

SRC_FILES	= /src/

OBJ_FILES	= $(SRC_FILES:.c=.o)

###########################################################################
#### RULES

$(NAME) : ${OBJ_FILES}
		${AR} ${NAME} ${OBJ_FILES}

$(LIBFT) :
		make -C libft

%.o: %.c $(INCLUDE)
    $(CC) $(FLAGS) -I ./ -c $< -o $@

all : clean fclean

clean :
	rm -f *.o

fclean : clean
	rm -f ${NAME}

re : fclean ${NAME}

.PHONY : bonus all clean fclean re