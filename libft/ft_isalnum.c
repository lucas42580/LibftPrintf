/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaysant <lpaysant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:38:49 by lpaysant          #+#    #+#             */
/*   Updated: 2024/12/05 10:13:00 by lpaysant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a'
			&& c <= 'z'))
		return (8);
	else
		return (0);
}

/*int	main(void)
{
	ft_isalnum(54);
		printf("%d\n", ft_isalnum(52));
		printf("%d\n", isalnum(52));
		printf("%d\n", ft_isalnum(80));
		printf("%d\n", isalnum(80));
		printf("%d\n", ft_isalnum(107));
		printf("%d\n", isalnum(107));
		printf("%d\n", ft_isalnum(32));
		printf("%d\n", isalnum(32));
		return (0);
}*/
