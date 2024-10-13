/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamolin <juamolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:35:53 by juamolin          #+#    #+#             */
/*   Updated: 2024/10/13 12:42:01 by juamolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	search(char c, char const *set)
{
	int i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int j;
	char *result;
	
	i = 0;
	j = ft_strlen(s1) - 1;
	while (s1[i])
	{
		if (search(s1[i], set) == 0)
			break;
		i++;
	}
	while (s1[j])
	{
		if (search(s1[j], set) == 0)
			break;
		j--;
	}
	result  = ft_substr(s1, i, (j - i) + 1);
	return (result);
}

/* int	main(void)
{
	char	*str = ft_strtrim("aeiua(TuT)uauiou", "aeiou");
	printf("%s\n", str);
	return (0);
}
 */