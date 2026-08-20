/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalayda <abalayda@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 10:43:18 by abalayda          #+#    #+#             */
/*   Updated: 2026/08/20 17:13:48 by abalayda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	backtrack(char *board, int r, int *count);
static int	is_safe(int r, int c, char *board);

int	ft_ten_queens_puzzle(void)
{
	char	board[10];
	int		count;

	count = 0;
	backtrack(board, 0, &count);
	return (count);
}

static void	backtrack(char *board, int r, int *count)
{
	int	c;

	if (r == 10)
	{
		write(1, board, 10);
		write(1, "\n", 1);
		(*count)++;
	}
	else
	{
		c = -1;
		while (++c < 10)
		{
			if (r == 0 || is_safe(r, c, board))
			{
				board[r] = c + '0';
				backtrack(board, r + 1, count);
			}
		}
	}
}

static int	is_safe(int r, int c, char *board)
{
	int	row;
	int	col;

	row = -1;
	while (++row < r)
	{
		col = board[row] - '0';
		if (col == c
			|| col - c == row - r
			|| col - c == -(row - r))
			return (0);
	}
	return (1);
}
