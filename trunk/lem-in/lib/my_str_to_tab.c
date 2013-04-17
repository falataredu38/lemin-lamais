/*
** my_str_to_tab.c for minishell2 in /home/lamais_a//Minishell1_et_2/lib
** 
** Made by adrien lamaison
** Login   <lamais_a@epitech.net>
** 
** Started on  Thu Feb 21 08:46:34 2013 adrien lamaison
** Last update Thu Feb 21 16:48:37 2013 adrien lamaison
*/

#include <stdlib.h>
#include "struct.h"

t_var	*init_struct(t_var *);

int	count_point(char *str)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (str[i] != 0)
    {
      if (str[i] == ':')
	j++;
      i++;
    }
  return (j);
}

char	*my_mallocone(char *str, int size)
{
  str = malloc((size + 1) * sizeof(char));
  if (str == NULL)
    {
      my_printf("BAD MALLOC\n");
      exit(0);
    }
  return (str);
}

char	**my_malloctwo(char **tab, int size)
{
  tab = malloc(size * sizeof(char *));
  if (tab == NULL)
    {
      my_printf("BAD MALLOC\n");
      exit(0);
    }
  return (tab);
}

char	**remplytab(char *str, char **tab, int space, t_var *ptr)
{
  while (ptr->j < space - 1 && str[ptr->k] != 0)
    {
      ptr->i = 0;
      ptr->save_k = ptr->k;
      while (str[ptr->k] != ':' && str[ptr->k] != 0)
	{
	  ptr->i++;
	  ptr->k++;
	}
      ptr->k = ptr->save_k;
      tab[ptr->j] = my_mallocone(tab[ptr->j], ptr->i);
      ptr->i = 0;
      while (str[ptr->k] != ':' && str[ptr->k] != 0)
	{
	  tab[ptr->j][ptr->i] = str[ptr->k];
	  ptr->i++;
	  ptr->k++;
	}
      if (str[ptr->k] == ':')
	ptr->k++;
      ptr->j++;
    }
  return (tab);
}

char	**my_str_to_tab(char *str)
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
  space = count_point(str);
  space += 2;
  tab = my_malloctwo(tab, space);
  tab[space - 1] = NULL;
  ptr = init_struct(ptr);
  tab = remplytab(str, tab, space, ptr);
  return (tab);
}
