/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaysant <lpaysant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 14:08:30 by lpaysant          #+#    #+#             */
/*   Updated: 2024/12/19 12:03:21 by lpaysant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "./libft/libft.h"
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
ssize_t	whichformat(const char **format, ssize_t *count, va_list ap);
ssize_t	printchar(const char **format, ssize_t *count, va_list ap);
ssize_t	printint(const char **format, ssize_t *count, va_list ap);
ssize_t	printptr(char *res, const char **format, ssize_t *count);
int		ft_putchar(int c, int fd);
int		ft_putstr(char *str, int fd);
int		ft_putnbr(int n, int fd, ssize_t *count);
int		putnbrbase(unsigned long nbr, const char *base, int fd, ssize_t *count);

#endif
