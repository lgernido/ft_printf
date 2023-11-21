###########################################################################
#### ARGUMENTS

NAME		= libftprintf.a
CC			= cc
CFLAGS		= -Wall -Werror -Wextra
AR 			= ar -rc
INCLUDE		= ft_printf.h
LIBFT		= libft

###########################################################################
#### SOURCES

SRC_FILES	= ft_easyprint.c ft_printf.c ft_printhex.c ft_printptr.c \
ft_printui.c

OBJ_FILES	= $(SRC_FILES:.c=.o)

###########################################################################
#### RULES

$(NAME) : ${OBJ_FILES}
		make -C $(LIBFT)
		cp $(LIBFT)/libft.a .
		mv libft.a ${NAME}
		${AR} ${NAME} ${OBJ_FILES}

%.o: %.c $(INCLUDE)
	$(CC) $(FLAGS) -I ./ -c $< -o $@


all : clean fclean 

clean :
	rm -f *.o
	make clean -C $(LIBFT)

fclean : clean
	rm -f ${NAME}
	make fclean -C $(LIBFT)

re : fclean ${NAME}

.PHONY : all clean fclean re