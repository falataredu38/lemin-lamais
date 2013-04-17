/*
** my_put_in_list.c for my_put_in_list in /home/lamais_a//Desktop/lib
** 
** Made by adrien lamaison
** Login   <lamais_a@epitech.net>
** 
** Started on  Tue Dec 11 09:24:55 2012 adrien lamaison
** Last update Thu Dec 20 17:23:28 2012 adrien lamaison
*/

#include "list.h"

int		my_put_in_list(t_list *list, void *data)
{
  struct s_list	*elem;

  elem = malloc(sizeof(*elem));
  if (elem = NULL)
    return (1);
  elem->data = data;
  elem->next = *list;
  *list = elem;
  return (0);
}
