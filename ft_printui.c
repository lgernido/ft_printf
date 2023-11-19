/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printui.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciegernidos <luciegernidos@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 15:27:29 by luciegernid       #+#    #+#             */
/*   Updated: 2023/11/19 15:39:27 by luciegernid      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_nbsize(unsigned	int n)
{
	int	size;

	size = 0;
	while (n != 0)
	{
		size++;
		n /= 10;
	}
	return (size);
}

char	*ft_uitoa(unsigned int n)
{
	char	*nb;
	int		size;

	size = ft_nbsize(n);
	nb = (char *)malloc(sizeof(char) * (size + 1));
	if (!nb)
		return (0);
	nb[size] = '\0';
	while (n != 0)
	{
		nb[size - 1] = n % 10 + '0';
		n /= 10;
		size--;
	}
	return (nb);
}

int	ft_printui(unsigned int n)
{
	int		size;
	char	*nb;

	size = 0;
	if (n == 0)
    {
    	write(1, "0", 1);
        size = 1;
    }
	else
	{
		nb = ft_uitoa(n);
		size = ft_printstr(nb);
		free(nb);
	}
	return (size);
}