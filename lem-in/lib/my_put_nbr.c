/*
** my_put_nbr.c for test in /home/lamais_a/
** 
** Made by adrien lamaison
** Login   <lamais_a@epitech.net>
** 
** Started on  Tue Oct  9 10:58:08 2012 adrien lamaison
** Last update Wed Nov 14 14:54:45 2012 adrien lamaison
*/

void	aff_nbr(int nbr)
{
  int	i;

  if (nbr !=0)
    {
      i = (nbr % 10) + 48;
      aff_nbr(nbr / 10);
      my_putchar(i);
    }
}

void	my_put_nbr(int nbr)
{
  int	i;
  if (nbr > 0)
    aff_nbr(nbr);
  if (nbr < 0)
    {
      nbr = nbr * (-1);
      my_putchar('-');
      aff_nbr(nbr);
    }
  if (nbr == 0)
    my_putchar('0');
}

