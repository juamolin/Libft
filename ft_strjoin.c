/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamolin <juamolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 13:03:51 by juamolin          #+#    #+#             */
/*   Updated: 2024/10/13 12:42:01 by juamolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int	i;
	int	j;

	i = 0;
	j = 0;
	result = (char *) malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * 
	sizeof(char));
	if (!result)
		return (NULL);
	while (s1[i])
		result[j++] = s1[i++];
	i = 0;
	while (s2[i])
		result[j++] = s2[i++];
	result[j] = 0;
	return (result);
}

/* int	main(void)
{
	char	*str1 = "Hola, ";
	char	*str2 = "que tal?";
	char	*resultado;

	resultado = ft_strjoin(str1, str2);
	printf("%s\n", resultado);
	return (0);
}
 */