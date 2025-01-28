/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaysant <lpaysant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:39:01 by lpaysant          #+#    #+#             */
/*   Updated: 2024/12/03 19:54:59 by lpaysant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;
	char	ch;

	i = 0;
	ch = (char)c;
	str = (char *)s;
	while (i < n)
	{
		if (str[i] == ch)
			return (&str[i]);
		i++;
	}
	return (NULL);
}

/*int     main(void)
{
		char    str [] = "sdldfldfd";
		int     c = 'l';

		printf("%p\n", ft_memchr(str, c, 10));
		printf("%p\n", memchr(str, c, 10));
	char s[] = {0, 1, 2 ,3 ,4 ,5};

	printf("%p\n", ft_memchr(s, 2 + 256, 3));
	printf("%p\n", memchr(s, 2 + 256, 3));
		return(0);
}*/
