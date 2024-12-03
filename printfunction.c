/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printfunction.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaysant <lpaysant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:10:24 by lpaysant          #+#    #+#             */
/*   Updated: 2024/12/03 15:37:45 by lpaysant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_puthexa_up(unsigned int ptr, int fd, int *count)
{
	char	*hexbase;

	hexbase = "0123456789ABCDEF";
	if (ptr >= 16)
		ft_puthexa_up((ptr / 16), fd, count);
	ft_putchar_fd(hexbase[ptr % 16], 1);
	(*count)++;
}

void	ft_puthexa_low(unsigned int ptr, int fd, int *count)
{
	char	*hexbase;

	hexbase = "0123456789abcdef";
	if (ptr >= 16)
		ft_puthexa_low((ptr / 16), fd, count);
	ft_putchar_fd(hexbase[ptr % 16], 1);
	(*count)++;
}

void	ft_puthexa(void *ptr, int fd, int *count)
{
	char			*hexbase;
	unsigned long	ptr1;

	hexbase = "0123456789abcdef";
	ptr1 = (unsigned long)ptr;
	if ((unsigned long)ptr1 >= 16)
	{
		ft_puthexa((void *)(ptr1 / 16), fd, count);
	}
	ft_putchar_fd(hexbase[ptr1 % 16], 1);
	(*count)++;
}

void	ft_putnbrun_fd(unsigned int n, int fd, int *count)
{
	if (n > 9)
	{
		ft_putnbrun_fd(n / 10, fd, count);
		ft_putnbrun_fd(n % 10, fd, count);
	}
	else
	{
		ft_putchar_fd(n + '0', fd);
		(*count)++;
	}
}
