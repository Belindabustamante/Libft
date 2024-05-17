NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = \
	  ft_isalpha.c\
	  ft_isdigit.c\
	  ft_isalnum.c\
	  ft_isascii.c\
	  ft_isprint.c\
	  ft_strlen.c\
	  ft_toupper.c\
	  ft_tolower.c\
	  ft_memset.c\
	  ft_bzero.c\
	  ft_memmove.c\
	  ft_memcpy.c\
	  ft_strlcpy.c\

OBJS = $(SRC:.c=.o)

all:  $(NAME) 

$(NAME):$(OBJS) 
	ar rsc $(NAME) $(OBJS) 

%.o:%.c 
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) 

fclean: clean
	rm -f $(NAME)

re:	fclean all

bonus:

.PHONY: fclean clean all re bonus
