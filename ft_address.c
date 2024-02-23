#include "ft_printf.h"

void	ft_adress(unsigned long n, int *printflen)
{
	char			*base;
	char			s[25];
	int				i;

	i = 0;
	base = "0123456789abcdef";
	if (!n)
	{
		ft_putstr("(nil)", printflen);
		return ;
	}
	ft_putstr("0x", printflen);
	while (n != 0)
	{
		s[i] = base[n % 16];
		n /= 16;
		i++;
	}
	while (i--)
		ft_putchar(s[i], printflen);
}
