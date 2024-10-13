/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamolin <juamolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 09:52:13 by juamolin          #+#    #+#             */
/*   Updated: 2024/10/13 11:56:07 by juamolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_numbers(int n)
{
	int	len;

	len = 1;
	if (n < 0)
		len++;
	while (n / 10 != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int	len;
	long	num;

	len = ft_count_numbers (n);
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';

	num = n;
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	while (len > 0 && str[len -1] != '-')
	{
		str[--len] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}

int	main(void)
{
	int	number = -12345;
	char	*str = ft_itoa(number);

	printf("el número como cadena: %s\n", str);
	free (str);
	return (0);
}
