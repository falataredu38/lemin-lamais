/*
** my_put_nbr.c for test in /home/lamais_a/
** 
** Made by adrien lamaison
** Login   <lamais_a@epitech.net>
** 
** Started on  Tue Oct  9 10:58:08 2012 adrien lamaison
** Last update Mon Dec  3 15:28:27 2012 adrien lamaison
*/

void	nbr_aff(int nbr, char *base, int size)
{
  int	i;

  if (nbr != 0)
    {
      i = (nbr % size);
      nbr_aff(nbr / size, base, size);
      my_putchar(base[i]);
    }
}

void	my_putnbr_base(int nbr, char *base)
{
  int	i;
  int	size;

  size = my_strlen(base);	
  if (nbr <= 0)
    {
      my_putchar('-');
      nbr_aff(-nbr, base, size);
    }
  else if (nbr == 0)
    my_putchar(base[0]);
  else
    aff_nbr(nbr, base, size);
}

