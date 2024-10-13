/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamolin <juamolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 17:55:44 by juamolin          #+#    #+#             */
/*   Updated: 2024/10/02 18:42:57 by juamolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*str;
	size_t		i;

	i = 0;
	str = s;
	while ((str[i] != '\0') && (i < n))
	{
		if (str[i] == (unsigned char)c)
			return ((unsigned char *)&str[i]);
		i++;
	}
	return (NULL);
}

int	main(void)
{
	const char *s = "viva la vida";
	int c = 'l';
	size_t n = 8;

//	printf("%s\n", (char*)memchr(s, c, n));//
//	printf("HOLA\n");//
	printf("%s\n", (char*)ft_memchr(s, c, n));
	return (0);
}
