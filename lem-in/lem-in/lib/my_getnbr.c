/*
** my_getner.c for my_getnbr in /home/lamais_a/
** 
** Made by adrien lamaison
** Login   <lamais_a@epitech.net>
** 
** Started on  Fri Oct 12 09:53:51 2012 adrien lamaison
** Last update Mon Dec 10 15:53:59 2012 adrien lamaison
*/
int	my_signe(char *nbr)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while(nbr[j] == '-' || nbr[j] == '+')
    {
      if (nbr[j] == '-')
	{
	  i = i + 1;
	}
  j = j + 1;
    }
  if (i % 2 == 1)
    {
      return(1);
    }
  return(0);
}

int	nbr_only(char *str)
{
  int	i;

  i = 0;
  while (str[i] == '+' || str[i] == '-' || str[i] == ' ')
    i = i + 1;
  return (i);

}

int	my_check(char *nbr, int signe, int i)
{
  char	*max;

  i = 0;
  max = "2147483647";
  if (signe == 1)
    max = "2147483648";
  while (nbr[i] >= '0' && nbr[i] <= '9')
    i = i + 1;
  if (i < 10)
    return (0);
  if (i > 10)
    return(1);
  if (i == 10);
    {
      while(max[i] != '\0')
	{
	  if (nbr[i] > max[i])
	    return(1);
	  i = i + 1;
	}
    }
    return(0);
}

int	my_getnbr(char *nbr)
{
  int	result;
  int	i;
  int	signe;

  result = 0;
  signe = my_signe(nbr);
  i = nbr_only(nbr);
  if(my_check(nbr, signe, i) == 1)
    return (0);
  while (nbr[i] >= '0' && nbr[i] <= '9' && nbr[i] != '\0')
    {
      result = result * 10;
      result = (nbr[i] - '0') + result;
      i = i + 1;
    }
  if (signe == 1)
    return (-result);
  return (result);
}


