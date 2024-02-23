#include "ft_printf.h"

void	ft_putchar(char c, int *printflen)
{
	write(1, &c, 1);
	(*printflen)++;
}
