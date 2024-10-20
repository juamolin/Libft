/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamolin <juamolin@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-17 18:25:18 by juamolin          #+#    #+#             */
/*   Updated: 2024-10-17 18:25:18 by juamolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*result;

	if (!s || !f)
		return (NULL);
	result = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s))
	{
		result[i] = (*f)(i, s[i]);
		i++;
	}
	result[i] = 0;
	return (result);
}

char	my_toupper(unsigned int i, char c)
{
	(void)i;
	return (ft_toupper(c));
}

/* int	main(void)
{
	char	*str = "Hola Mundo";
	char	*new_str = ft_strmapi(str, my_toupper);

	if (!new_str)
	{
		perror("Error al asignar memoria");
		return (1);
	}

	printf("Original string: %s\n", str);
	printf("Modified string: %s\n", new_str);
	free(new_str);
	return (0);
}
 */