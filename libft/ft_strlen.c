/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaysant <lpaysant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:15:34 by lpaysant          #+#    #+#             */
/*   Updated: 2024/12/02 15:06:43 by lpaysant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != 0)
		i++;
	return (i);
}

/*int	main(void)
{
	ft_strlen("salut");
	printf("%zu\n", ft_strlen("salut"));
	printf("%lu\n", strlen("salut"));
	printf("%zu\n", ft_strlen(""));
	printf("%lu\n", strlen(""));
        return (0);
}*/