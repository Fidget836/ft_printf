#include "ft_printf.h"

void	ft_putnbr_unsigned(unsigned int n, int *printflen)
{
	if (n > 9)
		ft_putnbr(n / 10, printflen);
	ft_putchar((n % 10) + '0', printflen);
}
