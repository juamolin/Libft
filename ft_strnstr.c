/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamolin <juamolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:42:02 by juamolin          #+#    #+#             */
/*   Updated: 2024/10/01 20:57:23 by juamolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		while (big[i] == little[j] && i < len)
		{
			i++;
			j++;
			if (little[j] == '\0')
				return ((char *)big);
		}
		big++;
		j = 0;
		i = 0;
	}
	return (NULL);
}

int	main(void)
{
	char	str1[] = "Hola mundo";
	char	str2[] = "mundo";
	size_t	len;

	len = 15;
	printf("%s\n", ft_strnstr(str1, str2, len));
	return (0);
}
