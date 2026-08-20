/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalayda <abalayda@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 10:06:53 by abalayda          #+#    #+#             */
/*   Updated: 2026/08/20 11:22:12 by abalayda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

/*
#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int	main(void)
{
	int	i;
	int	j;

	i = -5;
	while (i < 0)
	{
		j = -1;
		printf("%d ^ %d: %d\n", i, j, ft_recursive_power(i, j));
		j++;
		while (j < 4)
		{
			printf("%d ^  %d: %d\n", i, j, ft_recursive_power(i, j));
			j++;
		}
		i++;
	}
	while (i < 6)
	{
		j = -1;
		printf(" %d ^ %d: %d\n", i, j, ft_recursive_power(i, j));
		j++;
		while (j < 4)
		{
			printf(" %d ^  %d: %d\n", i, j, ft_recursive_power(i, j));
			j++;
		}
		i++;
	}
	return (0);
}
*/
