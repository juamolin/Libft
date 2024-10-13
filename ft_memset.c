/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamolin <juamolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 19:15:09 by juamolin          #+#    #+#             */
/*   Updated: 2024/09/21 21:54:23 by juamolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	*a;

	i = 0;
	a = (unsigned char *)s;
	while (i < n)
	{
		*a = (unsigned char)c;
		a++;
		i++;
	}
	return (s);
}

int	main(void)
{
	char	i[] = "Hola, que tal";
	size_t	str;

	str = sizeof(i);
	ft_memset(i, 's', 5);
	write(1, i, str);
	return (0);
}