CC = cc
FLAGS := -Wall -Werror -Wextra

AR = ar -rc
RM = rm -f

NAME = libftprintf.a

HEADER = ft_printf.h

SRCS = ft_printf.c	\
	ft_helper.c

OBJS = $(SRCS:%.c=%.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o : %.c $(HEADER)
	$(CC) $(FLAGS) -c $<

$(OBJS): $(HEADER)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
