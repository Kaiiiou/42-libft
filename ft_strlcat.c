/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kai-iou <kai-iou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 15:45:29 by kai-iou           #+#    #+#             */
/*   Updated: 2024/11/05 02:05:59 by kai-iou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	dstlen;
	size_t 	i;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	i 	   = 0;

	if (dstlen >= dstsize)
		return (dstsize + srclen);
	
	else if (srclen < dstsize - dstlen)
		while (i != srclen + 1)
		{
			dst[dstlen + i] = src[i];
			i++;
		}
	
	else
	{
		while((dstlen + i) < dstsize + 1)
		{
			dst[dstlen + i] = src[i];
			i++;
		}
		dst[dstsize -1] = '\0';
	}
	return(dstlen + srclen);
}