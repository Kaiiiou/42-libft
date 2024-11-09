/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kai-iou <kai-iou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 04:38:44 by kai-iou           #+#    #+#             */
/*   Updated: 2024/11/06 21:53:10 by kai-iou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int i;

	i = strlen(s);
	while (i >= 0)
	{
		if(s[i] == (char) c)
			return ((char *) s + i); 
		i--;
	}
	return (NULL);
}