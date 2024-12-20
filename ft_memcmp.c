/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamolin <juamolin@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-17 18:22:29 by juamolin          #+#    #+#             */
/*   Updated: 2024-10-17 18:22:29 by juamolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if ((unsigned char) str1[i] != (unsigned char) str2[i])
		{
			return ((unsigned char)str1[i] - (unsigned char) str2[i]);
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	const char	s1[] = "viva la vida";
	const char	s2[] = "viva";
	int		result;
	size_t		n;

	n = 4;
	result = ft_memcmp(s1, s2, n);
	printf("%d\n", result);
	return (0);
}*/