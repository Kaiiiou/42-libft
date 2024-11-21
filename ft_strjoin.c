/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kai-iou <kai-iou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 00:53:17 by kai-iou           #+#    #+#             */
/*   Updated: 2024/11/21 20:14:19 by kai-iou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	lens1;
	size_t	lens2;
	char	*fdst;
	size_t	i;
	size_t	iv2;

	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	i = 0;
	iv2 = 0;
	fdst = (char *)malloc(lens1 + lens2 + 1);
	if (!fdst)
		return (NULL);
	while (i < lens1)
	{
		fdst[i] = s1[i];
		i++;
	}
	while (iv2 < lens2)
	{
		fdst[i + iv2] = s2[iv2];
		iv2++;
	}
	fdst[i + iv2] = '\0';
	return (fdst);
}
