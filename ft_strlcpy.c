/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamolin <juamolin@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-17 18:25:02 by juamolin          #+#    #+#             */
/*   Updated: 2024-10-17 18:25:02 by juamolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size != 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
/*
int	main(void)
{
	char	dst[20];
	const char	src[] = "Hola, que tal?";
	size_t	len;

	len = ft_strlcpy(dst, src, sizeof(dst));

	printf("%lu\n", len);
	write(1, dst, ft_strlen(dst));
	write(1, "\n", 1);
	return (0);
}*/
