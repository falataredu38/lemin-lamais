/*
** verif.c for lem_in in /home/lamais_a//lem-in
** 
** Made by adrien lamaison
** Login   <lamais_a@epitech.net>
** 
** Started on  Wed Apr 17 09:18:33 2013 adrien lamaison
** Last update Wed Apr 17 10:15:54 2013 adrien lamaison
*/

#include <stdio.h>

int	check_comment(char *str)
{
  if (str[0] == '#' && str[1] != '#')
    return (1);
  return (0);
}

int	my_number(char c)
{
  if (c >= '0' && c <= '9')
    return (1);
  return (0);
}

int	first_line(char **file)
{
  int	col;
  int	line;
  
  col = 0;
  line = 0;
  while (check_comment(file[line]) == 1 && file[line] != NULL)
    line++;
  while (file[line][col] != 0)
    {
      if (my_number(file[line][col]) == 0)
	{
	  printf("La première lingne (differente de commentaire) ");
	  printf("doit etre un nombre\n");
	  return (-1);
	}
      col++;
    }
  return (0);
}
