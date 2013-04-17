/*
** my_printf.c for my_printf in /home/lamais_a//Desktop/my_printf/lib
** 
** Made by adrien lamaison
** Login   <lamais_a@epitech.net>
** 
** Started on  Sat Nov 17 11:14:37 2012 adrien lamaison
** Last update Wed Nov 21 15:24:50 2012 adrien lamaison
*/

#include <stdarg.h>
#include <errno.h>
#include <string.h>

void		verify(char c)
{
  my_putchar('%');
  my_putchar(c);
}

void		cond_verify(va_list ap, const char *str, int i)
{
  if (str[i] == 'u')
    my_putnbr_us(va_arg(ap, unsigned int));
  else if (str[i] == 'd' || str[i] == 'i')
    my_put_nbr(va_arg(ap, int));
  else if (str[i] == 's')
    my_putstr(va_arg(ap, char *));
  else if (str[i] == '%')
    my_putchar('%');
  else if (str[i] == 'c')
    my_putchar(va_arg(ap, int));
  else if (str[i] == 'b')
    my_putnbr_base(va_arg(ap, int), "01");
  else if (str[i] == 'o')
    my_putnbr_base(va_arg(ap, int), "01234567");
  else if (str[i] == 'x')
    my_putnbr_base(va_arg(ap, int), "0123456789abcdef");
  else if (str[i] == 'X')
    my_putnbr_base(va_arg(ap, int), "0123456789ABCDEF");
  else if (str[i] == 'm')
    my_putstr(strerror(errno));
  else 
    verify(str[i]);
}

int		my_printf(const char *format, ...)
{
  int		i;
  int		nbr;
  va_list	ap;

  i = 0;
  va_start(ap, format);
  while (format[i] != 0)
    {
      if (format[i] == '%')
	{
	  i = i + 1;
	  cond_verify(ap, format, i);
	  i = i + 1;
	}
      else
	{
	  my_putchar(format[i]);
	  i = i + 1;
	}
    }
  va_end(ap);
  return (0);
}
