#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

void	ft_putchar(char c, int *printflen);
void	ft_putstr(char *str, int *printflen);
void	ft_putnbr(int n, int *printflen);
void	ft_putnbr_unsigned(unsigned int n, int *printflen);
void	ft_putnbr_hex(int n, char c, int *printflen);
int		ft_printf(const char *str, ...);
void	ft_adress(unsigned long n, int *printflen);

#endif
