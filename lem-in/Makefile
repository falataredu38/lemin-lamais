##
## Makefile for Makefile in /home/lamais_a//Desktop/my_printf
## 
## Made by adrien lamaison
## Login   <lamais_a@epitech.net>
## 
## Started on  Fri Nov 16 14:41:15 2012 adrien lamaison
## Last update Wed Apr 17 13:19:41 2013 gueux
##

RM	= rm -f

CC	= gcc

CFLAGS	= -Wall -W -Wextra -Werror -g -g3
CFLAGS  += -I./include/ -Wall

LIB	= -Llib/ -lmy

LIBMY	= lib/libmy.a

NAME	= lem_in

SRCS	= src/main.c			\
	  src/parseur.c 		\
	  src/my_strcpr.c		\
	  src/epur_str.c		\
	  src/instruct_gere.c		\
	  src/verif.c			\

OBJS	= $(SRCS:.c=.o)

$(NAME)	: $(OBJS)
	make -C lib/
	$(CC) -o  $(NAME) $(OBJS) $(LIB)

all	: $(NAME)

clean	:
	$(RM) $(OBJS)
	make -C lib/ clean
	clean

fclean	: clean
	$(RM) $(NAME)
	$(RM) $(LIBMY)

re	: fclean all