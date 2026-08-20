/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalayda <abalayda@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 09:55:14 by abalayda          #+#    #+#             */
/*   Updated: 2026/08/20 10:05:46 by abalayda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (nb == 1)
		return (nb);
	i = nb;
	while (power > 1)
	{
		nb *= i;
		power--;
	}
	return (nb);
}

/*
#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int	main(void)
{
	int	i;
	int	j;

	i = -5;
	while (i < 0)
	{
		j = -1;
		printf("%d ^ %d: %d\n", i, j, ft_iterative_power(i, j));
		j++;
		while (j < 4)
		{
			printf("%d ^  %d: %d\n", i, j, ft_iterative_power(i, j));
			j++;
		}
		i++;
	}
	while (i < 6)
	{
		j = -1;
		printf(" %d ^ %d: %d\n", i, j, ft_iterative_power(i, j));
		j++;
		while (j < 4)
		{
			printf(" %d ^  %d: %d\n", i, j, ft_iterative_power(i, j));
			j++;
		}
		i++;
	}
	return (0);
}
*/
