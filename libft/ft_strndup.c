/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 11:16:16 by lgernido          #+#    #+#             */
/*   Updated: 2023/11/19 11:16:27 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strndup(const char *s, size_t n)
{
	char *dup;
	size_t i;
	size_t size;

	size = ft_strlen(s);
	if (size > n)
		dup = malloc(sizeof(char) * (n + 1));
	else
		dup = malloc(sizeof(char) * (size + 1));
	if (dup == 0)
		return (NULL);
	i = 0;
	while (s[i] && i < n)
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = 0;
	return (dup);
}