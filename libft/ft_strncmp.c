/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaysant <lpaysant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:56:23 by lpaysant          #+#    #+#             */
/*   Updated: 2024/12/03 19:54:18 by lpaysant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (i < n && str1[i] != '\0')
	{
		if (str1[i] == str2[i])
			i++;
		else
			return (str1[i] - str2[i]);
		if (i == n)
			return (str1[i - 1] - str2[i - 1]);
	}
	return (str1[i] - str2[i]);
}

/*int     main(void)
{
		char    s1 [] = "abcd";
		char    s2 [] = "abcc";

		printf("%d\n", ft_strncmp("zyxbcdefgh", "abcdwxyz", 0));
		printf("%d\n", strncmp(s1, s2, 25));
	printf("%d\n", ft_strncmp("abcdefgh", "", 0));
		return(0);
}*/
