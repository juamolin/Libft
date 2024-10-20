/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamolin <juamolin@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-17 18:24:41 by juamolin          #+#    #+#             */
/*   Updated: 2024-10-17 18:24:41 by juamolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t	j;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size <= dst_len)
		return (src_len + size);
	i = dst_len;
	j = 0;
	while (src[j] != '\0' && i < (size - 1))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst_len + src_len);
}
/*
int	main(void)
{
	char	dst[200]	= "pqrstuvwxyz";
	const char	src[] = "abcd";
 	size_t len;

 	len = ft_strlcat(dst, src, sizeof(dst));

 	printf("%lu,\n", len);
 	write(1, dst, ft_strlen(dst));
 	write(1, "\n", 1);
 	return (0);
}*/