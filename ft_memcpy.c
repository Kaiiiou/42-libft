/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kai-iou <kai-iou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:18:02 by kai-iou           #+#    #+#             */
/*   Updated: 2024/11/21 17:28:41 by kai-iou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;	
	unsigned char		*dstv2;
	const unsigned char	*srcv2;

	i = 0;
	dstv2 = (unsigned char *)dst;
	srcv2 = (unsigned char *)src;
	if (!src && !dst)
		return (NULL);
	while (i != n)
	{
		dstv2[i] = srcv2[i];
		i++;
	}
	return (dst);
}
