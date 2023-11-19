/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciegernidos <luciegernidos@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 15:41:53 by luciegernid       #+#    #+#             */
/*   Updated: 2023/11/19 15:50:49 by luciegernid      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_hexsize(unsigned	int nb)
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

void	ft_writehex(unsigned int nb, const char format)
{
	if (nb >= 16)
	{
		ft_writehex(nb / 16, format);
		ft_writehex(nb % 16, format);
	}
	else
	{
		if (nb <= 9)
			ft_putchar(nb + '0');
		else
		{
			if (format == 'x')
				ft_putchar(nb - 10 + 'a');
			if (format == 'X')
				ft_putchar(nb - 10 + 'A');
		}
	}
}

int	ft_printhex(unsigned int nb, const char format)
{
	if (nb == 0)
    {
		write(1, "0", 1);
        return(1);
    }
	else
		ft_writehex(nb, format);
	return (ft_hexsize(nb));
}