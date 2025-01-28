/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaysant <lpaysant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 17:28:08 by lpaysant          #+#    #+#             */
/*   Updated: 2024/12/02 15:04:03 by lpaysant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;
	t_list	*ptr1;

	if (lst == NULL)
		return ;
	ptr = *lst;
	if (del == NULL)
	{
		while (ptr != NULL)
		{
			ptr1 = ptr->next;
			free(ptr);
			ptr = ptr1;
		}
		lst = NULL;
		return ;
	}
	while (ptr != NULL)
	{
		ptr1 = ptr->next;
		del(ptr->content);
		free(ptr);
		ptr = ptr1;
	}
	*lst = NULL;
}
