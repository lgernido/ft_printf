/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 13:14:14 by lgernido          #+#    #+#             */
/*   Updated: 2023/11/20 09:12:15 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(va_list ap, const char format)
{
	int	size;

	size = 0;
	if (format == 'c')
		size += ft_printc(va_arg(ap, int));
	if (format == 's')
		size += ft_printstr(va_arg(ap, char *));
	if (format == 'i' || format == 'd')
		size += ft_printnb(va_arg(ap, int));
	if (format == '%')
		size += ft_printp(va_arg(ap, char));
	if (format == 'u')
		size += ft_printui(va_arg(ap, unsigned int));
	if (format == 'x' || format == 'X')
		size += ft_printhex(va_arg(ap, int));
	return (size);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		size;
	va_list	ap;

	i = 0;
	size = 0;
	va_start(ap, format);
	while (str[i])
	{
		if (str[i] == '%')
		{
			size += ft_format(ap, str[i + 1]);
			i++;
		}
		else
		{
			size += ft_printc(str[i]);
			i++;
		}
	}
	va_end(ap);
	return ((size);)
}
