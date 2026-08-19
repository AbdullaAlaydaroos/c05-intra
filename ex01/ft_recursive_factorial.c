/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalayda <abalayda@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 15:58:49 by abalayda          #+#    #+#             */
/*   Updated: 2026/08/19 16:01:23 by abalayda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb < 2)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

/*
#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	main(void)
{
	int	i;

	i = -1;
	while (i < 10)
	{
		printf("%d: %d\n", i, ft_recursive_factorial(i));
		i++;
	}
	return (0);
}
*/
