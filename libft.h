/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kai-iou <kai-iou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 11:52:50 by kai-iou           #+#    #+#             */
/*   Updated: 2024/10/29 15:00:18 by kai-iou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int	ft_isalpha	(int c);
int	ft_isdigit	(int c);
int	ft_isalnum	(int c);
int	ft_isascii	(int c);
int	ft_isprint	(int c);
size_t	strlen(const char *s);
void	*ft_memset(void *s, int c, size_t n);


#endif