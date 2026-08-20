/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalayda <abalayda@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 10:14:43 by abalayda          #+#    #+#             */
/*   Updated: 2026/08/20 11:18:32 by abalayda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*
#include <stdio.h>

int	ft_fibonacci(int index);

int	main(void)
{
	int	i;

	i = 0;
	while (i < 0)
	{
		printf("%d: %d\n", i, ft_fibonacci(i));
		i++;
	}
	while (i < 10)
	{
		printf(" %d: %d\n", i, ft_fibonacci(i));
		i++;
	}
}
*/
