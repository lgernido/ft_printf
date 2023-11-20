/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 13:12:07 by lgernido          #+#    #+#             */
/*   Updated: 2023/11/20 11:20:28 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>

int		ft_printc(int c);
int		ft_printstr(char *str);
int		ft_printnb(int n);
int		ft_printp(void);
int		ft_nbsize(unsigned int n);
char	*ft_uitoa(unsigned int n);
int		ft_printui(unsigned int n);
int		ft_hexsize(unsigned int nb);
void	ft_writehex(unsigned int nb, const char format);
int		ft_printhex(unsigned int nb, const char format);
int		ft_format(va_list ap, const char format);
int		ft_printf(const char *format, ...);

#endif