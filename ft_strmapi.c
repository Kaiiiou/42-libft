/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kai-iou <kai-iou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 02:53:01 by kai-iou           #+#    #+#             */
/*   Updated: 2024/11/21 20:23:35 by kai-iou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char			*sv2;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	sv2 = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!sv2)
		return (NULL);
	i = 0;
	while (s[i])
	{
		sv2[i] = f(i, s[i]);
		i++;
	}
	sv2[i] = '\0';
	return (sv2);
}
