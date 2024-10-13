/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamolin <juamolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:30:17 by juamolin          #+#    #+#             */
/*   Updated: 2024/09/26 19:31:17 by juamolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}
/*

int	main(void)
{
	char	l;

	l = 'L';
	l = ft_tolower(l);
	write(1, &l, 1);
	return (0);
}

int	main(void)
{
	char	str[] = "HOLA, QUE TAL?";
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		str[i] = ft_tolower(str[i]);
		i++;
	}
	str[i] = ft_tolower(str[i]);
	write(1, str, i);
	write(1, "\n", 1);
	return (0);
}*/
