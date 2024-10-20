/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamolin <juamolin@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-17 18:20:50 by juamolin          #+#    #+#             */
/*   Updated: 2024-10-17 18:20:50 by juamolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
/*

int	main(void)
{
	int	c;
	int	a;

	write(1, "MI FUNCION\n", 12);
	c = 'a';
	a = ft_isalpha(c);
	if (a != 0)
	{
		write(1, "\ttrue\n", 6); 
	}
	else 
	{
		write(1, "\tfalse\n", 7);
	}
	a = ft_isalpha('U');
	if (a != 0)
	{
		write(1, "\ttrue\n", 6); 
	}
	else 
	{
		write(1, "\tfalse\n", 7);
	}
	a = ft_isalpha(10);
	if (a != 0)
	{
		write(1, "\ttrue\n", 6); 
	}
	else 
	{
		write(1, "\tfalse\n", 7);
	}

	a = ft_isalpha(1024 + 66);
	
	if (a != 0)
	{
		write(1, "\ttrue\n", 6); 
	}
	else 
	{
		write(1, "\tfalse\n", 7);
	}

	write(1, &a, 1);
	write(1, "\n", 2);
	write(1, "FUNCION REAL\n", 13);
	a = isalpha(c);
	if (a != 0)
	{
		write(1, "\ttrue\n", 6); 
	}
	else 
	{
		write(1, "\tfalse\n", 7);
	}
	a = isalpha('U');
	if (a != 0)
	{
		write(1, "\ttrue\n", 6); 
	}
	else 
	{
		write(1, "\tfalse\n", 7);
	}
	a = isalpha(10);
	if (a != 0)
	{
		write(1, "\ttrue\n", 6); 
	}
	else 
	{
		write(1, "\tfalse\n", 7);
	}
	
	a = ft_isalpha(1024 + 66);
	
	if (a != 0)
	{
		write(1, "\ttrue\n", 6); 
	}
	else 
	{
		write(1, "\tfalse\n", 7);
	}
	return (0);
}*/
