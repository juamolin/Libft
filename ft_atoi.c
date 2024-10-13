/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamolin <juamolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:20:30 by juamolin          #+#    #+#             */
/*   Updated: 2024/10/13 19:05:52 by juamolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	num;
	int	sign;

	i = 0;
	num = 0;
	sign = 1;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (nptr[i] != '\0')
	{
		if (!(ft_isdigit(nptr[i])))
			return (num * sign);
		num = (nptr[i] - 48) + num * 10;
		i++;
	}
	return (num * sign);
}

int	main(void)
{
	char	str[] = "23456";

	printf("%d\n", ft_atoi(str));
	return (0);
}
