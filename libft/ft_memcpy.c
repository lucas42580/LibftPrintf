/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaysant <lpaysant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 13:31:44 by lpaysant          #+#    #+#             */
/*   Updated: 2024/12/02 15:04:42 by lpaysant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*dest1;
	const char	*src1;

	dest1 = (char *)dest;
	src1 = (const char *)src;
	i = 0;
	if ((dest == NULL && src == NULL) || n == 0)
		return (dest);
	while (i < n)
	{
		dest1[i] = src1[i];
		i++;
	}
	return (dest1);
}

// int     main(void)
// {
//         char src[] = "test basic du memcpy !";
// 	// char buff1[22];
//         // char buff2[22];

//         //ft_memcpy(buff1, src, 22);
//         //memcpy(buff2, src, 22);
// 	ft_memcpy(((void*)0), ((void*)0), 3);
// 	memcpy(((void*)0), ((void*)0), 3);
// 	// ft_memcpy(((void*)0), "segfaulter tu dois", 17);

//         //printf("%s", buff1);
// 	//printf("%s", buff2);
//         return (0);
// }