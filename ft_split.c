/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamolin <juamolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 17:09:04 by juamolin          #+#    #+#             */
/*   Updated: 2024/10/11 19:27:57 by juamolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if ((i == 0 && s[i] != c)
		|| (i >= 1 && (s[i] != c && s[i - 1] == c)))
			j++;
		i++;
	}
	return (j);
}

static char	*ft_word_dup(const char *s, int start, int finish)
{
	char	*word;
	int	i;

	word = (char*)malloc((finish - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (start < finish)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int	words;
	int	i;
	int	j;
	int	starts;

	if (!s)
		return (NULL);
	words = 0;
	words = ft_count_words(s, c);
	str = (char **)malloc(sizeof(char *) * (words + 1));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] == c && s[i] != '\0')
	{
		while(s[i] == c && s[i] != '\0')
			i++;
		starts = i;
		while(s[i] != c && s[i] != '\0')
			i++;
		if (i > starts)
			str[j++] = ft_word_dup(s, starts, i);
	}
	str[j] = NULL;
	return (str);
}

int	main(void)
{
	char	*str = " Hola  que tal";
	char	c = ' ';
	char	**result;
	int	i;

	result = ft_split(str, c);
	i = 0;
	while (result[i] != NULL)
	{
		printf("Word %d: %s\n", i, result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}
