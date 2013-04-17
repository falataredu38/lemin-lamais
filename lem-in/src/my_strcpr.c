/*
** my_strcpr.c for lem-in in /home/lamais_a//lem-in
** 
** Made by adrien lamaison
** Login   <lamais_a@epitech.net>
** 
** Started on  Mon Apr 15 11:48:48 2013 adrien lamaison
** Last update Mon Apr 15 12:10:17 2013 adrien lamaison
*/

#include <string.h>

int	my_strcpr(char *s1, char *s2)
{
  int	len1;
  int	len2;
  int	charact;

  len1 = strlen(s1);
  len2 = strlen(s2);
  charact = 0;
  if (len1 != len2)
    return (-1);
  while (s1[charact] != 0)
    {
      if (s1[charact] != s2[charact])
	return (-1);
      charact++;
    }
  return (0);
}
