/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamolin <juamolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 17:10:24 by juamolin          #+#    #+#             */
/*   Updated: 2024/10/07 18:59:34 by juamolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	return (str);
}

/* int	main(void)
{
	char const	*s = "Hello, world!";
	unsigned int	start = 1;
	size_t len = 1;

	char *substr = ft_substr(s, start, len);
	if (substr)
	{
		printf("Substr:%s\n", substr);
		free(substr);
	}
	else
	{
		printf("Error: ft_substr failed.\n");
	}
	return (0);
}
 */