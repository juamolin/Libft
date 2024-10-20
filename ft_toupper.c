/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamolin <juamolin@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-17 18:27:34 by juamolin          #+#    #+#             */
/*   Updated: 2024-10-17 18:27:34 by juamolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}
/*

int	main(void)
{
	char	l;

	l = 'i';
	l = ft_toupper(l);
	write (1, &l, 1);
	return (0);
}

int	main(void)
{
	char	str[] = "Hola, que tal?";
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		str[i] = ft_toupper(str[i]);
		i++;
	}
	write(1, str, i);
	write(1, "\n", 1);
	return (0);
}*/
