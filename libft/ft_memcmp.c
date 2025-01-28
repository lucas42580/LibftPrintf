/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaysant <lpaysant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:02:53 by lpaysant          #+#    #+#             */
/*   Updated: 2024/12/04 14:36:43 by lpaysant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
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
		/char    s1 [] = "abcd";
		char    s2 [] = "abcc";

		printf("%d\n", ft_memcmp(s1, s2, 3));
		printf("%d\n", memcmp(s1, s2, 3));
	char s[] = {-128, 0, 127, 0};
	char sCpy[] = {-128, 0, 127, 0};
	char s2[] = {0, 0, 127, 0};
	char s3[] = {0, 0, 42, 0};
	printf("%d\n", (!ft_memcmp(s2, s3, 4)));
	printf("%d", (!memcmp(s2, s3, 4)));
		return(0);
}*/
