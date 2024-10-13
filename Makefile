NAME = libft.a

CC = cc
CCFLAGS = -Wall -Wextra -Werror
RM = rm

SOURCE = ft_atoi.c ft_isprint.c ft_putchar_fd.c ft_striteri.c \
	ft_strnstr.c ft_bzero.c ft_itoa.c ft_putendl_fd.c ft_strjoin.c \
	ft_strrchr.c ft_calloc.c ft_memchr.c ft_putnbr_fd.c ft_strlcat.c \
	ft_strtrim.c ft_isalnum.c ft_memcmp.c ft_putstr_fd.c ft_strlcpy.c \
	ft_substr.c ft_isalpha.c ft_memcpy.c ft_split.c ft_strlen.c \
	ft_tolower.c ft_isascii.c ft_memmove.c ft_strchr.c ft_strmapi.c \
	ft_toupper.c ft_isdigit.c ft_memset.c ft_strdup.c ft_strncmp.c \

OBJS = $(SOURCE: .c=.o)

INCLUDE = libft.h

all: $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o : %.c $(INCLUDE)
	@$(CC) $(CCFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
