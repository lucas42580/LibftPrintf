/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaysant <lpaysant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:08:04 by lpaysant          #+#    #+#             */
/*   Updated: 2024/12/05 10:13:06 by lpaysant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1024);
	else
		return (0);
}

/*int	main(void)
{
	ft_isalpha(68);
	printf("%d", isalpha(68));
	return(0);
}*/
