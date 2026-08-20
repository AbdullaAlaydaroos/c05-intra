/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalayda <abalayda@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 10:21:43 by abalayda          #+#    #+#             */
/*   Updated: 2026/08/20 10:30:41 by abalayda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	long long	divisor;

	if (nb < 2)
		return (0);
	divisor = 2;
	while (divisor * divisor < nb)
	{
		if (nb % divisor == 0)
			return (0);
		divisor++;
	}
	return (1);
}

/*
#include <stdio.h>

int	ft_is_prime(int nb);

int	main(void)
{
	int	i;

	i = -1;
	printf("%d: %d\n", i, ft_is_prime(i)); // 0
	i = 0;
	printf(" %d: %d\n", i, ft_is_prime(i)); // 0
	i = 1;
	printf(" %d: %d\n", i, ft_is_prime(i)); // 0
	i = 2;
	printf(" %d: %d\n", i, ft_is_prime(i)); // 1
	i = 5;
	printf(" %d: %d\n", i, ft_is_prime(i)); // 1
	i = 10;
	printf(" %d: %d\n", i, ft_is_prime(i)); // 0
	i = 65521;
	printf(" %d: %d\n", i, ft_is_prime(i)); // 1
	i = 2147483647;
	printf(" %d: %d\n", i, ft_is_prime(i)); // 1
	return (0);
}
*/
