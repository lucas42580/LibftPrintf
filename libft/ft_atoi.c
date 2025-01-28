/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaysant <lpaysant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:48:03 by lpaysant          #+#    #+#             */
/*   Updated: 2024/12/02 15:12:25 by lpaysant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	mywritenbr(const char *str, int nb, int i)
{
	while (str[i] >= 48 && str[i] <= 57)
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (nb);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	nb;
	int	sign;

	i = 0;
	nb = 0;
	sign = 1;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == ' ' || nptr[i] == '+'
		|| nptr[i] == '-' || (nptr[i] >= '0' && nptr[i] <= '9'))
	{
		if ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == ' ')
			i++;
		if (nptr[i] == '+' || nptr[i] == '-')
		{
			if (nptr[i] == '-' && sign > 0)
				sign = sign * -1;
			i++;
			if (!(nptr[i] >= '0' && nptr[i] <= '9'))
				return (0);
		}
		if (nptr[i] >= '0' && nptr[i] <= '9')
			return (mywritenbr(nptr, nb, i) * sign);
	}
	return (0);
}

// int	main(void)
// {
//         char *n = " ---06050-   ";
//         printf("%d\n", atoi(n));
//         printf("%d\n", ft_atoi(n));
//         return(0);
// }
