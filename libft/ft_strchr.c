/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaysant <lpaysant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 13:38:25 by lpaysant          #+#    #+#             */
/*   Updated: 2024/12/05 10:14:55 by lpaysant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str1;

	i = 0;
	str1 = (char *)s;
	while (str1[i])
	{
		if ((unsigned char)c == str1[i])
			return (&str1[i]);
		i++;
	}
	if ((unsigned char)c == '\0')
		return (&str1[i]);
	return (NULL);
}

// int	main(void)
// {
// 	char    str [] = "hfehgjdlsfdgl";
// 	int     c = 'l';
// 	char	s[] = "tripouille";
// 	printf("%s\n", ft_strchr(str, c));
// 	printf("%s\n", strchr(str, c));
// 	printf("%p\n", ft_strchr("teste", 'e'));
// 	printf("%p\n", strchr("teste", 'e'));
// 	printf("%p\n", ft_strchr("teste", 1024));
// 	printf("%p\n", strchr("teste", 1024));
// 	printf("%s\n", ft_strchr(s, 't' + 256));
// 	printf("%s\n", strchr(s, 't' + 256));
// 	return (0);
// }
