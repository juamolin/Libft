/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamolin <juamolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:09:03 by juamolin          #+#    #+#             */
/*   Updated: 2024/10/13 17:33:22 by juamolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	return (0);
}
/*
 int	main(void)
{
	const char	str[] = "Hola, que tal?";
	char		*result;
	char		*result2;
	size_t		len;

	result = ft_strchr(str, 'l');
	result2 = strchr(str, 'l');

	if(result != NULL && result2 != NULL)
	{
		len = ft_strlen(result);
		len = ft_strlen(result2);
		write(1, result, len);
		write(1, result2, len);
	}
	else
		write(1, "No encontrado\n", 14);
	return (0);
}
 */