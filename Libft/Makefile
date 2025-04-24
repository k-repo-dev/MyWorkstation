NAME = libft.a

COMPILER = cc

COMPILERFLAGS = -Wall -Wextra - Werror

SRCS = ft_atoi.c, ft_bzero.c, ft_calloc.c,
		ft_isalnum.c, ft_isalpha.c, ft_isascii,
		ft_isdigit.c, ft_isprint.c, ft_itoa.c,
		ft_memchr.c, ft_memcmp., ft_memcpy,
		ft_memmove.c, ft_memset.c, ft_putchar_fd.c,
		ft_putendl_fd.c, ft_putnbr_fd.c, ft_putstr_fd.c,
		ft_split.c, ft_strchr.c, ft_strdup.c,
		ft_striteri.c, ft_strjoin.c, ft_strlcat.c,
		ft_strlcpy.c, ft_strlen.c, ft_strmapi.c,
		ft_strncmp.c, ft_strnstr.c, ft_strrchr.c,
		ft_strtrim.c, ft_substr.c, ft_tolower.c,
		ft_toupper.c

OBJCS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) -o $@ $^


clean:
	rm -f $(OBJS)
	echo "removing object files"

fclean: clean
	rm -f $(NAME)
	echo "removing executable file"

re: fclean all

.PHONY: all clean fclean re