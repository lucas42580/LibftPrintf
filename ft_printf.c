/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaysant <lpaysant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 17:19:30 by lpaysant          #+#    #+#             */
/*   Updated: 2025/01/06 14:00:02 by lpaysant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	printint(const char **format, ssize_t *count, va_list ap)
{
	if (**format == 'd' || **format == 'i')
	{
		if (ft_putnbr(va_arg(ap, int), 1, count) == -1)
			return (-1);
	}
	if (**format == 'u')
	{
		if (putnbrbase(va_arg(ap, unsigned int), "0123456789", 1, count) == -1)
			return (-1);
	}
	if (**format == 'X')
	{
		if (putnbrbase(va_arg(ap, unsigned int), "0123456789ABCDEF", 1,
				count) == -1)
			return (-1);
	}
	if (**format == 'x')
	{
		if (putnbrbase(va_arg(ap, unsigned int), "0123456789abcdef", 1,
				count) == -1)
			return (-1);
	}
	(*format)++;
	return (0);
}

ssize_t	printchar(const char **format, ssize_t *count, va_list ap)
{
	char	*res;

	if (**format == 'c')
	{
		if (ft_putchar(va_arg(ap, int), 1) == -1)
			return (-1);
		(*format)++;
		(*count)++;
	}
	else if (**format == 's')
	{
		res = va_arg(ap, char *);
		if (res == NULL)
			res = "(null)";
		if (ft_putstr(res, 1) == -1)
			return (-1);
		(*format)++;
		(*count) += ft_strlen(res);
	}
	return (0);
}

ssize_t	printptr(char *res, const char **format, ssize_t *count)
{
	if (res == NULL)
	{
		(*format)++;
		if (ft_putstr("(nil)", 1) == -1)
			return (-1);
		(*count) += 5;
		return (0);
	}
	if (ft_putstr("0x", 1) == -1)
		return (-1);
	(*count) += 2;
	if (putnbrbase((unsigned long)res, "0123456789abcdef", 1, count) == -1)
		return (-1);
	(*format)++;
	return (0);
}

ssize_t	whichformat(const char **format, ssize_t *count, va_list ap)
{
	char	*res;
	char	f;

	f = **format;
	if (f == 'p')
	{
		res = va_arg(ap, void *);
		if (printptr(res, format, count) == -1)
			return (-1);
	}
	if (f == '%')
	{
		if (ft_putchar('%', 1) == -1)
			return (-1);
		(*format)++;
		(*count)++;
	}
	if (f == 'c' || f == 's')
		if (printchar(format, count, ap) == -1)
			return (-1);
	if (f == 'd' || f == 'i' || f == 'u' || f == 'x' || f == 'X')
		if (printint(format, count, ap) == -1)
			return (-1);
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	ssize_t	count;

	va_start(ap, format);
	count = 0;
	if (!format)
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (whichformat(&format, &count, ap) == -1)
				return (-1);
		}
		else
		{
			if (ft_putchar(*format, 1) == -1)
				return (-1);
			count++;
			format++;
		}
	}
	va_end(ap);
	return (count);
}
// #include <limits.h>
// #include <stdio.h>

// int	main(void)
// {
// 	int		nb1;
// 	int		nb2;
// 	int		nb3;
// 	int		nb4;
// 	int		nb5;
// 	int		nb6;
// 	int		nb7;
// 	int		nb8;
// 	int		nb9;
// 	int		nb10;
// 	int		nb11;
// 	int		nb12;
// 	char	*ptr1;
// 	char	*ptr2;

// 	ptr1 = "Pointer";
// 	ptr2 = NULL;
// 	printf("Test de ft_printf\n");
// 	nb1 = ft_printf("Les caracteres %c %s %s %s %% abc%%abc %s%s \n", 'C',
// 			"String", "", (char *)NULL, "ABC", "DEF");
// 	nb3 = ft_printf("Les nombres : %d/ %d/ %d/ %i/ %i/ %i/ %u/ %d%d\n", 123,
// 			INT_MAX, INT_MIN, INT_MAX, INT_MIN, 123, 123, 123, 456);
// 	nb5 = ft_printf("Les bases : %x/ %X\n", 123, 123);
// 	nb7 = ft_printf("Les pointeurs : %p/ %p\n", ptr1, ptr2);
// 	nb9 = ft_printf("Autres : csdiuxXp/ %d %i %u\n", 0, 0, 0, 0, 0);
// 	printf("Test de printf\n");
// 	nb2 = printf("Les caracteres %c %s %s %s %% abc%%abc %s%s \n", 'C',
// 			"String", "", (char *)NULL, "ABC", "DEF");
// 	nb4 = printf("Les nombres : %d/ %d/ %d/ %i/ %i/ %i/ %u/ %d%d\n", 123,
// 			INT_MAX, INT_MIN, INT_MAX, INT_MIN, 123, 123, 123, 456);
// 	nb6 = printf("Les bases : %x/ %X\n", 123, 123);
// 	nb8 = printf("Les pointeurs : %p/ %p\n", ptr1, ptr2);
// 	nb10 = ft_printf("Autres : csdiuxXp/ %d %i %u\n", 0, 0, 0, 0, 0);
// 	printf("%d = %d\n", nb1, nb2);
// 	printf("%d = %d\n", nb3, nb4);
// 	printf("%d = %d\n", nb5, nb6);
// 	printf("%d = %d\n", nb7, nb8);
// 	printf("%d = %d\n", nb9, nb10);
// 	nb11 = ft_printf(NULL);
// 	nb12 = printf(NULL);
// 	ft_printf("%d\n", nb11);
// 	printf("%d\n", nb12);
// 	return (0);
// }
