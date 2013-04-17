/*
** my_put_nbr.c for test in /home/lamais_a/
** 
** Made by adrien lamaison
** Login   <lamais_a@epitech.net>
** 
** Started on  Tue Oct  9 10:58:08 2012 adrien lamaison
** Last update Sat Nov 17 09:44:43 2012 adrien lamaison
*/

void	affnbr(unsigned int nbr)
{
  int	i;

  if (nbr !=0)
    {
      i = (nbr % 10) + 48;
      affnbr(nbr / 10);
      my_putchar(i);
    }
}

void	my_putnbr_us(unsigned int nbr)
{
  int	i;
  if (nbr != 0)
    affnbr(nbr);
  if (nbr == 0)
    my_putchar('0');
}

