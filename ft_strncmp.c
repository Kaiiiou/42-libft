/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kai-iou <kai-iou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 23:58:22 by kai-iou           #+#    #+#             */
/*   Updated: 2024/11/07 02:17:26 by kai-iou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
size_t i;
i = 0;

while (i < n)
	{
		if(s1[i] != s2[i] || s1[i] == '\0' || s2[i] == '\0')
			return((unsigned char) s1[i] - (unsigned char) s2[i]);
		i++;
	}
	return(0);
}