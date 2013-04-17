/*
** my_str_to_wordtab.c for minishell in /home/lamais_a//Desktop/minishell
** 
** Made by adrien lamaison
** Login   <lamais_a@epitech.net>
** 
** Started on  Fri Dec 28 13:22:00 2012 adrien lamaison
** Last update Wed Apr 17 09:15:23 2013 adrien lamaison
*/

#include <stdlib.h>
#include "struct.h"

int	count_space(char *str)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (str[i] != 0)
    {
      if (str[i] == ' ')
	j++;
      i++;
    }
  return (j);
}

char	*my_malloc_one(char *str, int size)
{
  str = malloc((size + 1) * sizeof(char));
  if (str == NULL)
    {
      my_printf("BAD MALLOC\n");
      exit(0);
    }
  return (str);
}

char	**my_malloc_two(char **tab, int size)
{
  tab = malloc(size * sizeof(char *));
  if (tab == NULL)
    {
      my_printf("BAD MALLOC\n");
      exit(0);
    }
  return (tab);
}

char	**remply_tab(char *str, char **tab, int space, t_var *ptr)
{
  while (ptr->j < space - 1 && str[ptr->k] != 0)
    {
      ptr->i = 0;
      ptr->save_k = ptr->k;
      while (str[ptr->k] != ' ' && str[ptr->k] != 0)
	{
	  ptr->i++;
	  ptr->k++;
	}
      ptr->k = ptr->save_k;
      tab[ptr->j] = my_malloc_one(tab[ptr->j], ptr->i);
      ptr->i = 0;
      while (str[ptr->k] != ' ' && str[ptr->k] != 0)
	{
	  tab[ptr->j][ptr->i] = str[ptr->k];
	  ptr->i++;
	  ptr->k++;
	}
      if (str[ptr->k] == ' ')
	ptr->k++;
      ptr->j++;
    }
  return (tab);
}

char	**my_str_to_wordtab(char *str)
{
  int	i;
  int	j;
  int	k;
  int	space;
  char	**tab;
  t_var	*ptr;

  i = 0;
  j = 0;
  k = 0;
  space = count_space(str);
  space += 2;
  tab = my_malloc_two(tab, space);
  tab[space - 1] = NULL;
  ptr = init_struct(ptr);
  tab = remply_tab(str, tab, space, ptr);
  return (tab);
}

