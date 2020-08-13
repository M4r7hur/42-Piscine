/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armendes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 16:04:44 by armendes          #+#    #+#             */
/*   Updated: 2020/08/10 19:27:05 by armendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	g_tab[10];
int g_sol = 0;

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	disp(void)
{
	int row;

	row = -1;
	while (++row < 10)
	{
		ft_putchar(g_tab[row] + 48);
	}
	ft_putchar('\n');
}

int		place(int row, int col)
{
	int k;
	int abs_1;
	int abs_2;

	k = -1;
	while (++k < row)
	{
		if (g_tab[k] == col || k == row)
			return (0);
		abs_1 = g_tab[k] - col;
		abs_2 = k - row;
		if (abs_1 < 0)
			abs_1 = -abs_1;
		if (abs_2 < 0)
			abs_2 = -abs_2;
		if (abs_1 == abs_2)
			return (0);
	}
	return (1);
}

void	solve(int row, int n)
{
	int col;

	col = -1;
	while (++col < n)
	{
		if (place(row, col) == 1)
		{
			g_tab[row] = col;
			if (row == (n - 1))
			{
				disp();
				g_sol++;
			}
			else
				solve(row + 1, n);
		}
	}
}

int		ft_ten_queens_puzzle(void)
{
	solve(0, 10);
	return (g_sol);
}
