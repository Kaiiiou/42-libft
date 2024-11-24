/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarti <amarti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 01:12:09 by kai-iou           #+#    #+#             */
/*   Updated: 2024/11/24 08:08:16 by amarti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	ssize_t	iv2;
	size_t	srclen;

	i = 0;
	iv2 = -1;
	srclen = ft_strlen(src);
	if (dstsize >= srclen + 1)
	{
		while (i != srclen + 1)
		{
			dst[i] = src[i];
			i++;
		}
	}
	else if (dstsize == 0)
		return (srclen);
	else
	{
		while (++iv2 != (ssize_t)dstsize - 1)
			dst[iv2] = src[iv2];
		dst[dstsize - 1] = '\0';
	}
	return (srclen);
}
