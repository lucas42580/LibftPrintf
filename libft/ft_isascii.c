/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaysant <lpaysant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:49:18 by lpaysant          #+#    #+#             */
/*   Updated: 2024/12/05 10:13:08 by lpaysant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	ft_isascii(33);
	printf("%d\n", ft_isascii(32));
	printf("%d\n", isascii(32));
	printf("%d\n", ft_isascii(132));
	printf("%d", isascii(132));
	return (0);
}*/
