/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaysant <lpaysant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:46:27 by lpaysant          #+#    #+#             */
/*   Updated: 2024/12/02 15:03:56 by lpaysant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*intlimit(char *tab, int n, int len)
{
	n = 214748364;
	tab[len] = '8';
	tab[0] = '-';
	len--;
	while (n % 10 != 0)
	{
		tab[len] = (n % 10) + '0';
		n = n / 10;
		len--;
	}
	return (tab);
}

static int	isneg(int n)
{
	if (n >= 0)
		return (0);
	return (1);
}

static int	nbrlen(int n)
{
	int	len;

	len = 0;
	while (n / 10 != 0)
	{
		len++;
		n = n / 10;
	}
	len++;
	return (len);
}

char	*ft_itoa(int n)
{
	char	*tab;
	int		len;

	len = nbrlen(n) + isneg(n);
	tab = (char *) malloc (((len) * sizeof(char)) + 1);
	if (!tab)
		return (NULL);
	tab[len] = '\0';
	len--;
	if (n == 0)
		tab[0] = 48;
	if (n == -2147483648)
		return (intlimit(tab, n, len));
	if (isneg(n) == 1)
	{
		tab[0] = '-';
		n = n * (-1);
	}
	while (n % 10 != 0 || (n % 10 == 0 && n > 9))
	{
		tab[len] = (n % 10) + '0';
		n = n / 10;
		len--;
	}
	return (tab);
}

/*int	main(void)
{
	printf("%s\n", ft_itoa(1000034));
	return (0);
}*/