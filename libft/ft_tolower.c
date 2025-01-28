/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaysant <lpaysant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 13:33:56 by lpaysant          #+#    #+#             */
/*   Updated: 2024/12/05 10:20:08 by lpaysant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c = c + 32;
	return (c);
}

/*int     main(void)
{
		printf("%d\n", ft_tolower('B'));
		printf("%d", tolower('B'));
		return(0);
}*/
