/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printfunction.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaysant <lpaysant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:17:17 by lpaysant          #+#    #+#             */
/*   Updated: 2024/12/03 15:40:46 by lpaysant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTFUNCTION_H
# define PRINTFUNCTION_H

void	ft_puthexa_up(unsigned int ptr, int fd, int *count);
void	ft_puthexa_low(unsigned int ptr, int fd, int *count);
void	ft_puthexa(void *ptr, int fd, int *count);
void	ft_putnbrun_fd(unsigned int n, int fd, int *count);

#endif
