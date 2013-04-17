/*
** struct.h for my_str_to_wordtab.c in /home/lamais_a//Desktop/minishell
** 
** Made by adrien lamaison
** Login   <lamais_a@epitech.net>
** 
** Started on  Sat Dec 29 11:39:40 2012 adrien lamaison
** Last update Sun Mar 10 11:16:29 2013 adrien lamaison
*/

#ifndef STRUCT_H_
#define STRUCT_H_

typedef struct s_var
{
  int	i;
  int	j;
  int	k;
  int	save_k;
}t_var;

t_var	*init_struct(t_var *);
char	*my_malloc_one(char *, int);
char	**my_malloc_two(char **, int);

#endif /* !STRUCT_H_ */
