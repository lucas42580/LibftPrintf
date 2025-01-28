/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printfunction.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaysant <lpaysant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:10:24 by lpaysant          #+#    #+#             */
/*   Updated: 2024/12/18 13:16:42 by lpaysant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	putnbrbase(unsigned long nbr, const char *base, int fd, ssize_t *count)
{
	unsigned long	base_len;

	base_len = 0;
	while (base[base_len])
		base_len++;
	if (nbr >= base_len)
		putnbrbase(nbr / base_len, base, fd, count);
	if (ft_putchar(base[nbr % base_len], fd) == -1)
		return (-1);
	(*count)++;
	return (0);
}

int	ft_putnbr(int n, int fd, ssize_t *count)
{
	if (n < 0)
	{
		if (ft_putchar('-', fd) == -1)
			return (-1);
		n = n * (-1);
		(*count)++;
	}
	if (n == -2147483648)
	{
		(*count) += 10;
		if (write(fd, "2147483648", 10) == -1)
			return (-1);
	}
	if (n > 9)
	{
		ft_putnbr(n / 10, fd, count);
		ft_putnbr(n % 10, fd, count);
	}
	if (n >= 0 && n <= 9)
	{
		(*count)++;
		if (ft_putchar(n + '0', fd) == -1)
			return (-1);
	}
	return (0);
}

int	ft_putstr(char *str, int fd)
{
	if (write(fd, str, ft_strlen(str)) == -1)
		return (-1);
	return (0);
}

int	ft_putchar(int c, int fd)
{
	if (write(fd, &c, 1) == -1)
		return (-1);
	return (0);
}
