/*
** main.c for lem-in in /home/lamais_a//lem-in
** 
** Made by adrien lamaison
** Login   <lamais_a@epitech.net>
** 
** Started on  Mon Apr  8 09:03:30 2013 adrien lamaison
** Last update Wed Apr 17 10:26:23 2013 adrien lamaison
*/

#include <stdlib.h>
#include <stdio.h>
#include "lem-in.h"

int	main()
{
  char	**file;
  int	i = 0;

  file = read_file();
  if (file == NULL)
    return (-1);
  while (file[i] != NULL)
    {
      file[i] = epur_str(file[i]);
      i++;
    }
  if (gere_instruct(file) == -1)
    return (-1);
  if (first_line(file) == -1)
    return (-1);
  return (0);
}
