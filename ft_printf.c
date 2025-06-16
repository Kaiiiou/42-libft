/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarti <amarti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 20:54:56 by amarti            #+#    #+#             */
/*   Updated: 2025/06/16 21:03:16 by amarti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdarg.h>

static int	ft_putchar_count(char c)
{
	ft_putchar_fd (c, 1);
	return (1);
}

static int	ft_putstr_count(char *s)
{
	int	len;

	if (!s)
		s = "(null)";
	len = ft_strlen (s);
	ft_putstr_fd (s, 1);
	return (len);
}

static int	ft_putnbr_count(int n)
{
	char	*str;
	int		len;

	str = ft_itoa (n);
	len = ft_strlen (str);
	ft_putstr_fd (str, 1);
	free (str);
	return (len);
}

static int	ft_handle_format(char c, va_list args)
{
	if (c == 'c')
		return (ft_putchar_count (va_arg (args, int)));
	if (c == 's')
		return (ft_putstr_count (va_arg (args, char *)));
	if (c == 'd' || c == 'i')
		return (ft_putnbr_count (va_arg (args, int)));
	if (c == '%')
		return (ft_putchar_count ('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;
	int		i;

	va_start (args, format);
	count = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			count += ft_handle_format (format[i], args);
		}
		else
			count += ft_putchar_count (format[i]);
		i++;
	}
	va_end (args);
	return (count);
}
