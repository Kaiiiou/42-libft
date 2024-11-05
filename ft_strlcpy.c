/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kai-iou <kai-iou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 01:12:09 by kai-iou           #+#    #+#             */
/*   Updated: 2024/11/03 16:02:01 by kai-iou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	iv2;
	size_t	srclen;

	i = 0;
	iv2 = 0;
	srclen = ft_strlen(src);

	if(dstsize >= srclen + 1)
	{
		while(i != srclen + 1)
		{
			dst[i] = src[i];
			i++;
		}
	}
	else if(dstsize == 0)
	{
		return (srclen);
	}
	else
	{
		while(iv2 != dstsize - 1)
		{
			dst[iv2] = src[iv2];
			iv2++;
		}
		dst[dstsize - 1] = '\0';
	}
	return (srclen);
}