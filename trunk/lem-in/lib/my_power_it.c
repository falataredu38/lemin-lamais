/*
** my_power_it.c for my_power_it in /home/lamais_a/
** 
** Made by adrien lamaison
** Login   <lamais_a@epitech.net>
** 
** Started on  Fri Oct 12 12:20:14 2012 adrien lamaison
** Last update Fri Oct 12 12:30:50 2012 adrien lamaison
*/
int	my_power_it(int nb, int power)
{
  int	a;

  a = nb;
  while (power != 1)
    {
      nb = nb * a;
      power = power - 1;
    }
  return (nb);
}


