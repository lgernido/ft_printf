/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 09:33:13 by lgernido          #+#    #+#             */
/*   Updated: 2023/11/20 14:11:13 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptrsize(unsigned long long nb)
{
	int	len;

	len = 0;
	while (nb != 0)
	{
		len++;
		nb = nb / 16;
	}
	return (len);
}

void	ft_writeptr(unsigned long long nb, const char format)
{
	if (nb >= 16)
	{
		ft_writeptr(nb / 16, format);
		ft_writeptr(nb % 16, format);
	}
	else
	{
		if (nb <= 9)
			ft_printc(nb + '0');
		else
			ft_printc(nb - 10 + 'a');
	}
}

int	ft_printptr(unsigned long long nb, const char format)
{
	int size;
	if (!nb)
		return (ft_printstr("(nil)"));
	size += ft_printstr("0x");
	ft_writeptr(nb, format);
	size += ft_ptrsize(nb);
	return (size);
}