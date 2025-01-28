/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaysant <lpaysant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 12:31:39 by lpaysant          #+#    #+#             */
/*   Updated: 2024/12/02 15:06:04 by lpaysant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		j;
	size_t		len;

	i = ft_strlen(dst);
	j = ft_strlen(src);
	if (size <= i)
	{
		len = j + size;
		return (len);
	}
	else
		len = i + j;
	j = 0;
	while (j + i < size - 1 && src[j] != '\0')
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (len);
}

// int     main(void)
// {
//         // char    dst [] = "123";
//         // char    src [] = "456789";

//         // printf("%zu\n", strlcat(dst, src, 0));
//         // printf("%zu\n", ft_strlcat(dst, src, 0));
//         // printf("%s", dst);
//         // return(0);

// 	char dest[30]; memset(dest, 'C', 5);
// 	char * src = (char *)"AAAAAAAAA";

// 	// printf("%zu\n", ft_strlcat(dest, src, -1));
// 	// printf("%zu\n", strlcat(dest, src, -1));
// 	// printf("%d", strcmp(dest, "CCCCCAAAAAAAAA"));
// 	printf("%zu\n", strlcat(dest, src, 6));
// 	printf("%s\n", dest);
// 	return(0);	
// }