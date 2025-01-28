/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaysant <lpaysant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:54:20 by lpaysant          #+#    #+#             */
/*   Updated: 2024/12/02 16:16:28 by lpaysant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*tab;
	size_t	i;

	i = 0;
	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if ((SIZE_MAX / nmemb) < size)
		return (NULL);
	tab = malloc(nmemb * size);
	if (!tab)
		return (NULL);
	while (i < (nmemb * size))
	{
		tab[i] = '\0';
		i++;
	}
	return (tab);
}

/*int     main(void)
{
		char * tab = ft_calloc (4, 20 * sizeof(char));
		char * tab2 = calloc (0, 0);
		printf("%s\n", tab);
		printf("%s\n", tab2);
		return(0);
}*/
