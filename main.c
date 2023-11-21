/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 11:21:54 by lgernido          #+#    #+#             */
/*   Updated: 2023/11/21 11:29:41 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	// test 1
	ft_printf("ceci est un test\n");
	printf("ceci est un test\n\n");
	// test 2
	ft_printf("bonjour %c\n", 'l');
	printf("bonjour %c\n\n", 'l');
	// test 3
	ft_printf("bonjour %s\n", "lucie");
	printf("bonjour %s\n\n", "lucie");
	// test 4
	ft_printf("j'ai %d ans\n", 24);
	printf("j'ai %d ans\n\n", 24);
	// test 5
	ft_printf("j'ai %i ans\n", 24);
	printf("jai %i ans \n", 24);
	// test 6
	ft_printf("il y a 100%% de chance que je rate\n");
	printf("il y a 100%% de chance que je rate\n\n");
	return (0);
}
