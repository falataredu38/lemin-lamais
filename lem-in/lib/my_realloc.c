/*
** my_realloc.c for minishell in /home/lamais_a//Desktop/minishell
** 
** Made by adrien lamaison
** Login   <lamais_a@epitech.net>
** 
** Started on  Sat Dec 29 14:59:53 2012 adrien lamaison
** Last update Sat Feb 23 09:38:26 2013 adrien lamaison
*/

#include <stdlib.h>

char	*my_realloc(char *str, int size)
{
  char	*tmp;
  int	i;

  i = my_strlen(str);
  tmp = malloc(i);
  if (tmp == NULL)
    {
      my_printf("BAD REALLOC");
      exit(0);
    }
  tmp = str;
  str = malloc(size);
  if (str == NULL)
    {
      my_printf("BAD REALLOC");
      exit(0);
    }
  str = tmp;
  return (str);
}
