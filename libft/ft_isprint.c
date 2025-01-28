/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaysant <lpaysant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:58:22 by lpaysant          #+#    #+#             */
/*   Updated: 2024/12/05 10:13:24 by lpaysant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (16384);
	else
		return (0);
}

/*int	main(void)
{
	ft_isprint(32);
	printf("%d\n", ft_isprint(54));
	printf("%d\n", isprint(54));
	printf("%d\n", ft_isprint(20));
	printf("%d\n", isprint(20));
		return (0);
}*/
