/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamolin <juamolin@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-17 18:23:56 by juamolin          #+#    #+#             */
/*   Updated: 2024-10-17 18:23:56 by juamolin         ###   ########.fr       */
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
	if ((char)c == '\0')
		return ((char *)s);
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
