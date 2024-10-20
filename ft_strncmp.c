/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamolin <juamolin@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-17 18:25:28 by juamolin          #+#    #+#             */
/*   Updated: 2024-10-17 18:25:28 by juamolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n && ((s1[i] != '\0' || s2[i] != '\0')))
	{
		if (s1[i] != s2[i])
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	cadena[] = "abcdfpqrs";
	char	cadena2[] = "abcdfabcdf";
	int	result;

	result = ft_strncmp(cadena, cadena2, 0);
	printf("%i", result);
	return (0);
}*/