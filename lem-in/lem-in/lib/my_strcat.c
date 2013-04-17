/*
** my_strcat.c for strcat in /home/lamais_a//piscine
** 
** Made by adrien lamaison
** Login   <lamais_a@epitech.net>
** 
** Started on  Wed Dec 19 16:45:04 2012 adrien lamaison
** Last update Mon Apr  8 14:14:00 2013 adrien lamaison
*/

#include "proto.h"

char	*my_strcat(char *s1, char *s2)
{
  char	*tmp;
  int	l1;
  int	l2;
  int	l;
  int	i;

  i = 0;
  l1 = my_strlen(s1);
  l2 = my_strlen(s2);
  l = l1 + l2;
  s1[l + 1] = '\0';
  while (s1[i] != 0)
    {
      s1[l1] = s2[i];
      l1 = l1 + 1;
      i = i + 1;
    }
  return (s1);
}

char	*strcat_prepare(char *s1, char *s2)
{
  int	i;
  int	j;

  i = my_strlen(s1);
  j = my_strlen(s2);
  s1 = my_realloc(s1, i + j);
  s1 = my_strcat(s1, s2);
  return (s1);
}
