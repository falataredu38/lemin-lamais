/*
** my_revstr.c for my_revstr in /home/lamais_a/
** 
** Made by adrien lamaison
** Login   <lamais_a@epitech.net>
** 
** Started on  Sat Dec  1 22:07:29 2012 adrien lamaison
** Last update Sun Dec  2 10:14:39 2012 adrien lamaison
*/

void	my_revstr(char *str)
{
  int	i;

  i = my_strlen(str) -1;
  while (i != -1)
    {
      my_putchar(str[i]);
      i--;
    }
}
