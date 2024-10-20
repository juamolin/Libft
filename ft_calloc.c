/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamolin <juamolin@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-17 18:20:25 by juamolin          #+#    #+#             */
/*   Updated: 2024-10-17 18:20:25 by juamolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
