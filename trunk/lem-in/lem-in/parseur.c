/*
** main.c for 109titrage in /home/lamais_a//109titrage
** 
** Made by adrien lamaison
** Login   <lamais_a@epitech.net>
** 
** Started on  Thu Apr  4 08:57:48 2013 adrien lamaison
** Last update Wed Apr 17 10:24:19 2013 adrien lamaison
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lem-in.h"

int		verif_error(int start, int end)
{
  if (start == 0 || end == 0)
    {
      printf("lem_in : ");
      printf("Il doit avoir une commande ##start et une comande ##end\n");
      return (-1);
    }
  else if (start > 1 || end > 1)
    {
      printf("lem_in : ");
      printf("Il doit avoir une seule commande ##start ");
      printf("et une seule comande ##end\n");
      return (-1);
    }
  else
    return (0);
}

void		my_init(t_struct *my_struct)
{
  my_struct->nb_line = 0;
  my_struct->buffer = malloc(100);
  my_struct->file = malloc((my_struct->nb_line + 1) * sizeof(char *));
  if (my_struct->file == NULL || my_struct->buffer == NULL)
    exit(printf("BAD MALLOC\n"));
}

char		**read_file()
{
  t_struct	my_struct;

  my_init(&my_struct);
  while (my_struct.buffer != NULL || my_struct.nb_line == 0)
    {
      my_struct.j = 0;
      my_struct.buffer = fgets(my_struct.buffer, 100, stdin);
      if (my_struct.buffer != NULL)
	{
	  my_struct.file[my_struct.nb_line] = strdup(my_struct.buffer);
	  my_struct.j = strlen(my_struct.file[my_struct.nb_line]);
	  if (my_struct.file[my_struct.nb_line][my_struct.j - 1] == '\n')
	    my_struct.file[my_struct.nb_line][my_struct.j - 1] = 0;
	  my_struct.nb_line++;
	  my_struct.file = realloc(my_struct.file,
				   ((my_struct.nb_line + 1) * sizeof(char *)));
	  if (my_struct.file == NULL)
	    exit(0);
	}
    }
  return (my_struct.file);
}

int	verify(char **file)
{
  int	line;
  int	start;
  int	end;
  int	verif;

  line = 0;
  start = 0;
  end = 0;
  while (file[line] != NULL)
    {
      if (my_strcpr(file[line], "##start") == 0)
	start++;
      else if (my_strcpr(file[line], "##end") == 0)
	end++;
      if (start == 0 && end == 1)
	{
	  printf("Il doit avoir la commande ##start avant la comande ##end\n");
	  return (0);
	}
      line++;
    }
  verif = verif_error(start, end);
  return (verif);
}

int	gere_instruct(char **file)
{
  int	line;
  int	verif;

  line = 0;
  verif = verify(file);
  while (file[line] != NULL)
    {
      if (instruct_gere(file[line]) == 1)
	{
	  if (my_strcpr(file[line], "##start") == -1 
	      && my_strcpr(file[line], "##end") == -1)
	    {
	      printf("warning : %s : commande not found ", file[line]);
	      printf("(L%d)\n", line + 1);
	    }
	}
      line++;
    }
  if (verif == -1)
    return (-1);
  return (0);
}
