/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaysant <lpaysant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 12:17:03 by lpaysant          #+#    #+#             */
/*   Updated: 2024/12/02 15:07:49 by lpaysant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*str;
	size_t		i;

	i = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		len = 0;
	else if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	str = (char *) malloc ((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len && (s + start != NULL))
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}

// int	main(void)
// {
// 	// printf("%s\n", ft_substr("ABCDEF", 1, 3));
// 	// printf("%s\n", ft_substr("ABCDEF", 4, 10));
// 	// char *str = "i just want this part #############";
//         // size_t size = 10;
// 	// printf("%s\n", ft_substr("***189543***", 4, 6));
// 	// printf("%s\n", ft_substr("01234", 10, 10));
// 	printf("%s\n", ft_substr("hola", 4294967295, 0));
// 	printf("%s\n", ft_substr("", 1, 1));
// 	return(0);
// }