##
## Makefile for makefile in /home/lamais_a//Desktop/my_printf/lib
## 
## Made by adrien lamaison
## Login   <lamais_a@epitech.net>
## 
## Started on  Fri Nov 16 16:15:27 2012 adrien lamaison
## Last update Mon Mar  4 09:48:20 2013 adrien lamaison
##

CFLAGS	= -g

RM	= rm -f

AR	= ar rc

NAME	= libmy.a

SRCS	= my_putchar.c \
	my_put_nbr.c \
	my_putnbr_base.c \
	my_putnbr_us.c \
	my_putstr.c \
	my_strcpy.c \
	my_strncpy.c \
	my_strlen.c \
	my_printf.c \
	my_getnbr.c \
	my_power_it.c \
	my_swap.c \
	my_str_to_wordtab.c \
	init_struct.c \
	my_strcat.c \
	my_realloc.c \
	my_str_to_tab.c

OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
