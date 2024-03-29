SRCS	= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
		ft_memcpy.c ft_striteri.c ft_strmapi.c ft_strtrim.c ft_split.c ft_itoa.c ft_memmove.c ft_atoi.c ft_toupper.c \
		ft_tolower.c ft_strchr.c ft_strrchr.c ft_memchr.c ft_memcmp.c ft_calloc.c ft_strlcpy.c ft_strlcat.c ft_strncmp.c \
		ft_strnstr.c ft_strdup.c ft_substr.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strjoin.c \
		ft_strmapi.c ft_printf.c ft_print_hexa.c ft_print_integer.c ft_print_ptr.c ft_print_string.c ft_printf_utils.c ft_search_format.c \
		ft_print_unsigned.c

SRCS_B	= ft_lstmap.c ft_lstiter.c ft_lstclear.c ft_lstdelone.c ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c

OBJS	= ${SRCS:.c=.o}

OBJS_B	= ${SRCS_B:.c=.o}

CC	= gcc

NAME	= libft.a

CFLAGS	= -Wall -Werror -Wextra 

RM	= rm -f

%.o : 	%.c
	${CC} -o $@ -c $< ${CFLAGS}
	
all : ${NAME}

$(NAME) : ${OBJS} libft.h
	ar rcs ${NAME} ${OBJS}

bonus : ${OBJS} ${OBJS_B} libft.h
		ar rcs ${NAME} ${OBJS} ${OBJS_B}

clean :
	${RM} ${OBJS} ${OBJS_B}

fclean : clean
	${RM} ${NAME}

re : fclean all