##
## Makefile for Makefile in /home/lamais_a//Desktop/my_printf
## 
## Made by adrien lamaison
## Login   <lamais_a@epitech.net>
## 
## Started on  Fri Nov 16 14:41:15 2012 adrien lamaison
## Last update Wed Apr 17 09:39:21 2013 adrien lamaison
##

RM	= rm -f

CC	= gcc 

CFLAGS	= -Wall -W -Wextra -Werror -g -g3

LIB	= -Llib/ -lmy 

LIBMY	= lib/libmy.a

NAME	= lem_in

SRCS	= main.c		\
	  parseur.c 		\
	  my_strcpr.c		\
	  epur_str.c		\
	  instruct_gere.c	\
	  verif.c		\

OBJS	= $(SRCS:.c=.o)

$(NAME): $(OBJS)
	make -C lib/
	$(CC) -o  $(NAME) $(OBJS) $(LIB)

all: $(NAME)

clean:
	$(RM) $(OBJS)
	make -C lib/ clean	
	clean

fclean: clean
	$(RM) $(NAME)
	$(RM) $(LIBMY)

re: fclean all