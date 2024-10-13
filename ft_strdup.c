/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamolin <juamolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 15:30:34 by juamolin          #+#    #+#             */
/*   Updated: 2024/10/07 18:59:42 by juamolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	
	dup = malloc(ft_strlen(s) + 1);
	if (!dup)
		return (0);
	ft_strlcpy(dup, s, ft_strlen (s) + 1);
	return (dup);
}
/* 
int	main(void)
{
	char	*str_src;
	char	*str_dup;
	
	str_src = malloc(ft_strlen("viva la vida") + 1);
	ft_strlcpy(str_src, "viva la vida", ft_strlen("viva la vida") + 1);

	str_dup = ft_strdup(str_src);
	printf("Direccion de src: %s\n", str_src);
	printf("Direccion de dup: %s\n", str_dup);
	
	return (0);
}
 */