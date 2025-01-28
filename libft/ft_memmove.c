/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaysant <lpaysant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:47:33 by lpaysant          #+#    #+#             */
/*   Updated: 2024/12/02 15:04:53 by lpaysant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*strnotovrlap(unsigned char *d1, const unsigned char *s1, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		d1[i] = s1[i];
		i++;
	}
	return ((char *)d1);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char			*dest1;
	const unsigned char		*src1;

	dest1 = (unsigned char *)dest;
	src1 = (const unsigned char *)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (dest1 <= src1)
	{
		strnotovrlap (dest1, src1, n);
		return ((char *)dest1);
	}
	else
	{
		while (n > 0)
		{
			n--;
			dest1[n] = src1[n];
		}
		return ((char *)dest1);
	}
}

// int     main(void)
// {
// 	char	src[] = "lorem ipsum dolor sit amet";
// 	char	dest[] = "lorem ipum dolor sit a";
// 	ft_memmove(src, dest, 8);
// 	printf("%s\n", dest);
// 	return(0);
// }