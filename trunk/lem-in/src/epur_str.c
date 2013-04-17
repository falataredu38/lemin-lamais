/*
** epur_str.c for all in /home/lamais_a//lem-in/test
** 
** Made by adrien lamaison
** Login   <lamais_a@epitech.net>
** 
** Started on  Mon Apr 15 15:44:14 2013 adrien lamaison
** Last update Tue Apr 16 11:01:57 2013 adrien lamaison
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	count_epur_str(char *str)
{
  int	charact;
  int	size;
  
  charact = 0;
  size = 0;
  while (str[charact] == ' ' || str[charact] == '\t')
    charact++;
  while (str[charact] != 0)
    {
      if (str[charact] == ' ' || str[charact] == '\t')
	{
	  size++;
    	  while (str[charact] == ' ' || str[charact] == '\t')
	    charact++;
	}
      else
	{
	  size++;
	  charact++;
	}
    }
  return (size);
}

char	*remply_end_zero(char *str)
{
  int	len;
  
  len = strlen(str) - 1;
  while ((str[len] == ' ' || str[len] == '\t') && len >= 0)
    str[len--] = 0;
  return (str);
}

char	*cpy_epur_str(char *src, char *dest)
{
  int	charact1;
  int	charact2;
  
  charact1 = 0;
  charact2 = 0;
  while (src[charact1] == ' ' || src[charact1] == '\t')
    charact1++;
  while (src[charact1] != 0)
    {
      if (src[charact1] == ' ' || src[charact1] == '\t')
	{
	  dest[charact2] = ' ';
	  charact2++;
    	  while (src[charact1] == ' ' || src[charact1] == '\t')
	    charact1++;
	}
      else
	{
	  dest[charact2] = src[charact1];
	  charact2++;
	  charact1++;
	}
    }
  return (dest);
}

char	*epur_str(char *str)
{
  int	size;
  char	*dest;

  str = remply_end_zero(str);
  if (strlen(str) != 0)
    {
      size = count_epur_str(str);
      dest = malloc(size);
      if (dest == NULL)
	exit(printf("BAD MALLOC"));
      cpy_epur_str(str, dest);
      return (dest);
    }
  else
    return (realloc(str, 1));
}
