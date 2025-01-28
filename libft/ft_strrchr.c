/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaysant <lpaysant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:37:06 by lpaysant          #+#    #+#             */
/*   Updated: 2024/12/05 10:24:05 by lpaysant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str1;

	i = 0;
	str1 = (char *)s;
	i = ft_strlen(s);
	while (i > 0 && (unsigned char)c != str1[i])
		i--;
	if ((unsigned char)c == str1[i])
		return (&str1[i]);
	return (0);
}

// int     main(void)
// {
//         char    str [] = "fwtdsylsersdrdlfdf";
//         int     c = 'l';
// 	char s[] = "tripouille";

//         printf("%s\n", ft_strrchr(str, c));
//         printf("%s\n", strrchr(str, c));
// 	printf("%p\n", ft_strrchr("teste", 'e'));
// 	printf("%p\n", strrchr("teste", 'e'));
// 	printf("%p\n", ft_strrchr("teste", '\0'));
// 	printf("%p\n", strrchr("teste", '\0'));
// 	printf("%s\n", ft_strrchr(s, 't' + 256));
// 	printf("%s\n", strrchr(s, 't' + 256));
//         return(0);
// }
