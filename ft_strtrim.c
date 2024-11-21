/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kai-iou <kai-iou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 08:10:53 by kai-iou           #+#    #+#             */
/*   Updated: 2024/11/21 20:33:10 by kai-iou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str, char const *chars)
{
	size_t	left;
	size_t	right;

	if (!str || !chars)
		return (NULL);
	left = 0;
	while (str[left] && ft_strchr(chars, str[left]))
		left++;
	right = ft_strlen(str);
	while (right > left && ft_strchr(chars, str[right - 1]))
		right--;
	return (ft_substr(str, left, right - left));
}
