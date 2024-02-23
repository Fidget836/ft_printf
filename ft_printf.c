#include "ft_printf.h"

static void	ft_format(char c, va_list suite, int *printflen)
{
	if (c == 'c')
		ft_putchar(va_arg(suite, int), printflen);
	if (c == 's')
		ft_putstr(va_arg(suite, char *), printflen);
	if (c == 'p')
		ft_adress(va_arg(suite, unsigned long), printflen);
	if (c == 'd')
		ft_putnbr(va_arg(suite, int), printflen);
	if (c == 'i')
		ft_putnbr(va_arg(suite, int), printflen);
	if (c == 'u')
		ft_putnbr_unsigned(va_arg(suite, unsigned int), printflen);
	if (c == 'x')
		ft_putnbr_hex(va_arg(suite, int), c, printflen);
	if (c == 'X')
		ft_putnbr_hex(va_arg(suite, int), c, printflen);
	if (c == '%')
		ft_putchar('%', printflen);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		*printflen;
	int		tmp;
	va_list	suite;

	tmp = 0;
	printflen = malloc(sizeof(int));
	va_start(suite, str);
	i = 0;
	*printflen = 0;
	while (str[i])
	{
		if (str[i] == '%')
			ft_format(str[i++ + 1], suite, printflen);
		else
		{
			(*printflen)++;
			write(1, &str[i], 1);
		}
		i++;
	}
	va_end(suite);
	tmp = *printflen;
	free(printflen);
	return (tmp);
}
