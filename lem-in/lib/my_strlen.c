/*
** my_strlen.c for my_strlen.c in /home/lamais_a//Bistromathique
** 
** Made by adrien lamaison
** Login   <lamais_a@epitech.net>
** 
** Started on  Wed Oct 31 09:57:56 2012 adrien lamaison
** Last update Fri Nov  2 11:48:08 2012 adrien lamaison
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != 0)
      i = i + 1;
  return (i);
}
