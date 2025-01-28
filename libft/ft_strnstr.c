/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaysant <lpaysant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:19:27 by lpaysant          #+#    #+#             */
/*   Updated: 2024/12/03 19:56:32 by lpaysant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	islittle(char *big, char *little, size_t i, size_t len)
{
	size_t	j;

	j = 0;
	while (big[i] == little[j] && i < len)
	{
		i++;
		j++;
		if (little[j] == '\0')
			return (0);
	}
	return (1);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*b;
	char	*l;

	i = 0;
	j = 0;
	b = (char *)big;
	l = (char *)little;
	if (l[j] == '\0')
		return (&b[i]);
	while (i < len && b[i] != '\0')
	{
		if (islittle(b, l, i, len) == 0)
			return (&b[i]);
		else
			i++;
	}
	return (NULL);
}

/*int     main(void)
{
		char big [] = "ndddddddndnggg";
		char little [] = "dng";

		printf("%s\n", ft_strnstr(big, little, 15));
		printf("%s\n", strnstr(big, little, 15));
	printf("%s\n", ft_strnstr("aaxx", "xx", 3));
	printf("%s\n", strnstr("aaxx", "xx", 3));
	printf("%s\n", ft_strnstr("abcdefgh", "abc", 2));
	printf("%s\n", strnstr("abcdefgh", "abc", 2));
	char haystack[30] = "aaabcabcd";
	char needle[10] = "aabc";
	char * empty = (char*)"";
	printf("%s\n", ft_strnstr(haystack, needle, -1));
	printf("%s", strnstr(haystack, needle, -1));
		return(0);
}*/
