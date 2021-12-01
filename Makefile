NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

FILES = ft_memset \
		ft_bzero \
		ft_memcpy \
		ft_memmove \
		ft_memchr \
		ft_memcmp \
		ft_strlen \
		ft_strlcpy \
		ft_strlcat \
		ft_strchr \
		ft_strrchr \
		ft_strnstr \
		ft_strncmp \
		ft_atoi \
		ft_isalpha \
		ft_isdigit \
		ft_isalnum \
		ft_isascii \
		ft_isprint \
		ft_toupper \
		ft_tolower \
		ft_calloc \
		ft_strdup \
		ft_substr \
		ft_putchar_fd \
		ft_putstr_fd \
		ft_putendl_fd \
		ft_putnbr_fd \
		ft_itoa \
		ft_striteri \
		ft_strmapi \
		ft_strjoin \
		ft_strtrim \

SRCS_DIR = ./
SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES)))
SRCS_B = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES_B)))

OBJS_DIR = ./
OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))
OBJS_B = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES_B)))

COMP_COLOR= 9

.c.o: $(SRCS)
	@echo "\033[0;31mCompiling..."
	@$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJS)
	@echo "\033[0;33mLinking..."
	@$(AR) $@ $^
	@echo "\033[0;32mOK!"

bonus: $(OBJS_B)
	$(AR) $(NAME) $^

all: $(NAME)

clean:
	@echo "\033[0;33mCleaning..."
	@echo "\033[0;33mCleaning..."
	@echo "\033[0;33mCleaning..."
	@$(RM) $(OBJS) $(OBJS_B)
	@echo "\033[0;32mOK CLEAN!"

fclean:	clean
	$(RM) $(NAME)

re: clean all

.PHONY: bonus all clean fclean re
