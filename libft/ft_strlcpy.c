/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaysant <lpaysant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:27:51 by lpaysant          #+#    #+#             */
/*   Updated: 2024/12/02 15:06:36 by lpaysant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	n;
	size_t	i;

	i = 0;
	n = 0;
	while (src[n])
		n++;
	if (size > 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (n);
}

/*int     main(void)
{
        char    dst [] = "";
        char    src [] = "123";

        printf("%zu\n", ft_strlcpy(dst, src, 0));
        printf("%zu\n", strlcpy(dst, src, 0));
        printf("%s", dst);
	char *str = "BBBB";
        char buff1[0xF00];
        char buff2[0xF00];
 
        memset(buff1, 'A', 20);
        memset(buff2, 'A', 20);
        strlcpy(buff1, str, sizeof(buff1));
        ft_strlcpy(buff2, str, sizeof(buff2));
	printf("%s\n", buff1);
	printf("%s", buff2);
        return(0);
}*/