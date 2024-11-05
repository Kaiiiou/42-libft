/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kai-iou <kai-iou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 23:06:14 by kai-iou           #+#    #+#             */
/*   Updated: 2024/10/29 22:47:55 by kai-iou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	unsigned char *cv2;

	i = 0;
	cv2 = (unsigned char *)s;

	while (i != n)
	{
		cv2[i] = (unsigned char)c;
		i++;
	}
	return (s);
}