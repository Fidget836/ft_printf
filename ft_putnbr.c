#include "ft_printf.h"

void	ft_putnbr(int n, int *printflen)
{
	if (n == -2147483648)
		ft_putstr("-2147483648", printflen);
	else
	{
		if (n < 0)
		{
			ft_putchar('-', printflen);
			n = n * -1;
		}
		if (n > 9)
		{
			ft_putnbr(n / 10, printflen);
		}
		ft_putchar((n % 10) + '0', printflen);
	}
}
