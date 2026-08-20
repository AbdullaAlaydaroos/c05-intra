/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalayda <abalayda@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 10:14:58 by abalayda          #+#    #+#             */
/*   Updated: 2026/08/20 17:13:27 by abalayda         ###   ########.fr       */
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
