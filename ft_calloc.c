/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamolin <juamolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 17:02:11 by juamolin          #+#    #+#             */
/*   Updated: 2024/10/13 10:24:54 by juamolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	nmemb es el número de elementos.
	size es el tamaño de cada uno de estos elementos.
	Por lo tanto, la región de memoria
	que puede albergar nmemb elemntos, cada uno con un tamaño de size
	ha de tener (nmemb * size) número de bytes
*/

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*j;

	j = malloc(nmemb * size);
	if (!j)
		return (NULL);
	ft_bzero(j, nmemb * size);
	return (j);
}
/*
int	main(void)
{
	size_t	n_of_elements = 1;
	char *	memory;


	memory = (char *)ft_calloc( n_of_elements,  sizeof(int));

	printf("calloc returns the following bytes\n");
	printf("for ft_calloc(%lu, %lu)\n", n_of_elements, sizeof(int));
	

	size_t i = 0;


	while (i < n_of_elements * sizeof(int))
	{
		printf("[%d]", memory[i]);
		i++;
	}
	printf("\n");
	return (0);
}*/
