/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamolin <juamolin@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-17 18:22:17 by juamolin          #+#    #+#             */
/*   Updated: 2024-10-17 18:22:17 by juamolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = ((unsigned char *)s);
	while (i < n)
	{
		if (str[i] == (unsigned char )c)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char *s = "viva la vida";
	int c = 'l';
	size_t n = 6;

//	printf("%s\n", (char*)memchr(s, c, n));//
//	printf("HOLA\n");//
	printf("%s\n", (char*)ft_memchr(s, c, n));
	return (0);
}*/
