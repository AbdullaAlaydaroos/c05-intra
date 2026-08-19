/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalayda <abalayda@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 15:58:45 by abalayda          #+#    #+#             */
/*   Updated: 2026/08/19 15:58:46 by abalayda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main(void)
{
	int	i;

	i = -1;
	while (i < 10)
	{
		printf("%d: %d\n", i, ft_iterative_factorial(i));
		i++;
	}
	return (0);
}
