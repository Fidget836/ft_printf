#include "ft_printf.h"

void	ft_putnbr_hex(int n, char c, int *printflen)
{
	long	nbr;
	char	*base;

	nbr = n;
	if (c == 'x')
		base = "0123456789abcdef";
	if (c == 'X')
		base = "0123456789ABCDEF";
	if (nbr < 0)
		nbr = 4294967296 - (nbr * -1);
	if (nbr < 16)
		ft_putchar(base[nbr], printflen);
	if (nbr >= 16)
	{
		ft_putnbr_hex((nbr / 16), c, printflen);
		ft_putnbr_hex((nbr % 16), c, printflen);
	}
}
