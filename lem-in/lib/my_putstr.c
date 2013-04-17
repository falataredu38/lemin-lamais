
/*
** my_putstr.c for my_putstr in /home/lamais_a/
** 
** Made by adrien lamaison
** Login   <lamais_a@epitech.net>
** 
** Started on  Tue Oct 23 11:32:06 2012 adrien lamaison
** Last update Tue Nov 13 09:23:02 2012 adrien lamaison
*/

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
}
