/*
** my_strcpy.c for strcpy in /home/lamais_a//Desktop/my_printf
** 
** Made by adrien lamaison
** Login   <lamais_a@epitech.net>
** 
** Started on  Fri Nov 16 10:46:07 2012 adrien lamaison
** Last update Fri Nov 16 16:43:59 2012 adrien lamaison
*/

#include <stdlib.h>

char	*my_strcpy(char *dest, char *src)
{

  int	i;

  i = my_strlen(src);
  dest = malloc(i * sizeof(char));
  i = 0;
  while (src[i] != 0)
    {
      dest[i] = src[i];
      i = i + 1;
    }
  return (dest);
}
