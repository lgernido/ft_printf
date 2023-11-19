/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 13:14:14 by lgernido          #+#    #+#             */
/*   Updated: 2023/11/19 13:31:23 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printc(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_printstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		ft_putstr("(null)");
		return (6);
	}
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}
int	ft_printnbr(int n)
{
	int		size;
	char	*nb;

	nb = ft_itoa(n);
	size = ft_printstr(nb);
	free(nb);
	return (size);
}

int	ft_printp(void)
{
	write(1, "%", 1);
	return (1);
}

int	ft_printf(const char *, ...)
{
}
