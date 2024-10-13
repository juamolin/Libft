/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamolin <juamolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 20:11:44 by juamolin          #+#    #+#             */
/*   Updated: 2024/10/13 12:42:01 by juamolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}

void	my_toupper_inplace(unsigned int i, char *c)
{
	(void)i;
	*c = ft_toupper(*c);
}

/* int	main(void)
{
	char	s[] = "Hola, mundo";
	ft_striteri(s, &my_toupper_inplace);
	printf("%s\n", s);
}
 */