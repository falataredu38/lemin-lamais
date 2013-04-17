/*
** exo_01.c for exo_01 in /home/lamais_a//test_Jour_06
** 
** Made by adrien lamaison
** Login   <lamais_a@epitech.net>
** 
** Started on  Mon Oct  8 10:05:38 2012 adrien lamaison
** Last update Mon Dec  3 15:27:50 2012 adrien lamaison
*/

#include <stdlib.h>

char	*my_strncpy(char *str, char *dest, int n)
{
  dest = malloc((n + 1) * sizeof(char));
  dest[n] = 0;
  n--;
  while (n != -1)
    {
      dest[n] = str[n];
      n = n - 1;
    }
  return(dest);
}

