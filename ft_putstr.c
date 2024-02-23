#include "ft_printf.h"

void	ft_putstr(char *str, int *printflen)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		write(1, "(null)", 6);
		(*printflen) += 6;
		return ;
	}
	while (str[i])
		ft_putchar(str[i++], printflen);
}
