/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamolin <juamolin@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-17 18:21:47 by juamolin          #+#    #+#             */
/*   Updated: 2024-10-17 18:21:47 by juamolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
/*
int	main(void)
{
	int	c;
	int	a;

	c = 'a';
	a = ft_isdigit(c);
	a += '0';
	write(1, &a, 1);
	return (0);
}*/