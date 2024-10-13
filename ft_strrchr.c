/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamolin <juamolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 20:20:12 by juamolin          #+#    #+#             */
/*   Updated: 2024/09/28 12:30:38 by juamolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while(i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}

int	main(void)
{
	const  char	cadena[] = "la vida es maravillosa";
	char		*resultado;
	char		*resultado2;
	size_t		len;

	resultado = ft_strrchr(cadena, 'i');
	resultado2 = strrchr(cadena, 'i');

	if (resultado != NULL && resultado2 != NULL)
	{
		len = ft_strlen(resultado);
		len = ft_strlen(resultado2);
		write(1, resultado, len);
		write(1, resultado2, len);
	}
	else
		write(1, "no encontrado\n", 14); 
	return (0);
}
