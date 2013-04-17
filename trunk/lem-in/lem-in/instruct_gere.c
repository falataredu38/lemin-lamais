/*
** my_char.c for lem-in in /home/lamais_a//lem-in
** 
** Made by adrien lamaison
** Login   <lamais_a@epitech.net>
** 
** Started on  Mon Apr 15 13:58:11 2013 adrien lamaison
** Last update Mon Apr 15 15:38:59 2013 adrien lamaison
*/

#include "lem-in.h"

int	instruct_gere(char *str)
{
  if (str[0] == '#' && str[1] == '#')
    return (1);
  return (0);
}
