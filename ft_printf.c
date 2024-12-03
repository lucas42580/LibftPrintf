/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaysant <lpaysant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 17:19:30 by lpaysant          #+#    #+#             */
/*   Updated: 2024/12/03 18:41:59 by lpaysant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "printfunction.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

int	countnbr(int nb)
{
	int	count;

	count = 1;
	while (nb / 10 != 0)
	{
		nb = nb / 10;
		count++;
	}
	return (count);
}

void	printint(const char *format, int *i, int *count, va_list ap)
{
	int	nb;

	if (format[(*i) + 1] == 'd' || format[(*i) + 1] == 'i')
	{
		nb = va_arg(ap, int);
		ft_putnbr_fd(nb, 1);
		(*i) += 2;
		(*count) += countnbr(nb);
	}
	if (format[(*i) + 1] == 'u')
	{
		ft_putnbrun_fd(va_arg(ap, unsigned int), 1, count);
		(*i) += 2;
	}
	if (format[(*i) + 1] == 'x')
	{
		ft_puthexa_low(va_arg(ap, unsigned int), 1, count);
		(*i) += 2;
	}
	if (format[(*i) + 1] == 'X')
	{
		ft_puthexa_up(va_arg(ap, unsigned int), 1, count);
		(*i) += 2;
	}
}

void	printchar(const char *format, int *i, int *count, va_list ap)
{
	char	*res;

	if (format[(*i) + 1] == 'c')
	{
		ft_putchar_fd(va_arg(ap, int), 1);
		(*i) += 2;
		(*count)++;
	}
	else if (format[(*i) + 1] == 's')
	{
		res = va_arg(ap, char *);
		if (res == NULL)
		{
			(*i) += 2;
			ft_putstr_fd("(null)", 1);
			(*count) += 6;
			return ;
		}
		ft_putstr_fd(res, 1);
		(*i) += 2;
		(*count) += ft_strlen(res);
	}
}

void	whichformat(const char *format, int *i, int *count, va_list ap)
{
	char	*res;

	if (format[(*i) + 1] == 'p')
	{
		res = va_arg(ap, void *);
		if (res == NULL)
		{
			(*i) += 2;
			ft_putstr_fd("(nil)", 1);
			(*count) += 5;
			return ;
		}
		ft_putstr_fd("0x", 1);
		(*count) += 2;
		ft_puthexa(res, 1, count);
		(*i) += 2;
	}
	else if (format[(*i) + 1] == '%')
	{
		ft_putchar_fd('%', 1);
		(*i) += 2;
		(*count)++;
	}
	else if (format[(*i) + 1] == 'c' || format[(*i) + 1] == 's')
		printchar(format, i, count, ap);
	else if (format[(*i) + 1] == 'd' || format[(*i) + 1] == 'i' || format[(*i)
		+ 1] == 'u' || format[(*i) + 1] == 'x' || format[(*i) + 1] == 'X')
		printint(format, i, count, ap);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	va_list	ap;
	int		count;

	va_start(ap, format);
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] != 'c' && format[i + 1] != 's' && format[i
				+ 1] != 'p' && format[i + 1] != 'd' && format[i + 1] != 'i'
				&& format[i + 1] != 'u' && format[i + 1] != 'x' && format[i
				+ 1] != 'X' && format[i + 1] != '%')
			{
				ft_putstr_fd("[error] wrong format!", 1);
				return (0);
			}
			else
				whichformat(format, &i, &count, ap);
		}
		else
		{
			ft_putchar_fd(format[i], 1);
			i++;
			count++;
		}
	}
	va_end(ap);
	return (count);
}

int	main(void)
{
	char	*ptr;
	char	*ptr2;
	int		nb;
	int		nb2;

	ptr = NULL;
	ptr2 = NULL;
	nb = ft_printf("je m'appelle %s, mon age est %d et mon pointeur est %p\n",
			ptr2, 29, ptr);
	nb2 = printf("je m'appelle %s, mon age est %d et mon pointeur est %p\n",
			ptr2, 29, ptr);
	printf("%d\n", nb);
	printf("%d\n", nb2);
	return (0);
}
