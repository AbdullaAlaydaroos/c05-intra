/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalayda <abalayda@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 10:14:58 by abalayda          #+#    #+#             */
/*   Updated: 2026/08/20 10:21:27 by abalayda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int					lower;
	int					upper;
	unsigned long long	mid;

	if (nb < 0)
		return (0);
	if (nb < 2)
		return (nb);
	lower = 2;
	upper = nb;
	while (lower < upper)
	{
		mid = (upper + lower) / 2;
		if (mid * mid == (unsigned int)nb)
			return (mid);
		if (mid * mid < (unsigned int)nb)
			lower = mid + 1;
		else
			upper = mid - 1;
	}
	return (0);
}

/*
#include <stdio.h>

int	ft_sqrt(int nb);

int	main(void)
{
	int	i;

	i = -1;
	printf("%d: %d\n", i, ft_sqrt(i)); // 0
	i = 0;
	printf(" %d: %d\n", i, ft_sqrt(i)); // 0
	i = 1;
	printf(" %d: %d\n", i, ft_sqrt(i)); // 1
	i = 2;
	printf(" %d: %d\n", i, ft_sqrt(i)); // 1
	i = 5;
	printf(" %d: %d\n", i, ft_sqrt(i)); // 0
	i = 24;
	printf(" %d: %d\n", i, ft_sqrt(i)); // 5
	i = 25;
	printf(" %d: %d\n", i, ft_sqrt(i)); // 5
	i = 26;
	printf(" %d: %d\n", i, ft_sqrt(i)); // 5
	i = 1764;
	printf(" %d: %d\n", i, ft_sqrt(i)); // 42
	i = 2401;
	printf(" %d: %d\n", i, ft_sqrt(i)); // 49
	i = 10000;
	printf(" %d: %d\n", i, ft_sqrt(i)); // 10000
	return (0);
}
*/
