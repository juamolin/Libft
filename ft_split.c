/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamolin <juamolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 17:09:04 by juamolin          #+#    #+#             */
/*   Updated: 2024/10/14 21:11:29 by juamolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

static void	*ft_free(char **ptr)
{
	int	i;

	i = 0;
	while (ptr[i])
	{
		free (ptr[i]);
		i++;
	}
	free (ptr);
	return (NULL);
}

static char	**ft_split_two(char const *s, char c, int n)
{
	char			**str;
	int				i;
	const char		*starts;

	i = 0;
	str = (char **)malloc(sizeof(char *) * (n + 1));
	if (!str)
		return (NULL);
	while (i < n)
	{
		while (*s == c)
			s++;
		starts = s;
		while (*s && *s != c)
			s++;
		str[i] = ft_substr(starts, 0, s - starts);
		if (!str[i])
			return (ft_free(str));
		i++;
	}
	str[i] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int		n;

	if (!s)
		return (NULL);
	n = ft_count_words (s, c);
	return (ft_split_two(s, c, n));
}
/*
int	main(void)
{
	char	*str = " Hola  que tal";
	char	c = ' ';
	char	**result;
	int	i;

	result = ft_split(str, c);
	i = 0;
	while (result[i])
	{
		printf("Word %d: %s\n", i, result[i]);
		i++;
	}
	ft_free(result);
	return (0);
}*/
