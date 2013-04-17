/*
** init_struct.c for my_str_to_wordtab.h in /home/lamais_a//Desktop/minishell
** 
** Made by adrien lamaison
** Login   <lamais_a@epitech.net>
** 
** Started on  Sat Dec 29 11:50:32 2012 adrien lamaison
** Last update Sat Dec 29 13:46:09 2012 adrien lamaison
*/

#include <stdlib.h>
#include "struct.h"

t_var	*init_struct(t_var *ptr)
{
  ptr = malloc(sizeof(t_var));
  if (ptr == NULL)
    {
      my_printf("BAD MALLOC");
      exit(0);
    }
  ptr->i = 0;
  ptr->j = 0;
  ptr->k = 0;
  ptr->save_k = 0;
  return (ptr);
}
