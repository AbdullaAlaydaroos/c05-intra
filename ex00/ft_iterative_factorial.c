/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalayda <abalayda@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 15:53:15 by abalayda          #+#    #+#             */
/*   Updated: 2026/08/20 14:03:36 by abalayda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	result = 1;
	while (nb > 1)
	{
		result *= nb;
		nb--;
	}
	return (result);
}

/*
#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main(void)
{
	int	i;

	i = -1;
	while (i <= 12)
	{
		printf("%d: %d\n", i, ft_iterative_factorial(i));
		i++;
	}
	return (0);
}
*/
