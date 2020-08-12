/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armendes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 12:04:33 by armendes          #+#    #+#             */
/*   Updated: 2020/08/08 12:09:53 by armendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int h;
	int l;

	h = 0;
	l = 0;
	while (h < y && x > 0 && y > 0)
	{
		while (l < x)
		{
			if (l == 0 && (h == 0 || h == y - 1))
				ft_putchar('A');
			else if (l == x - 1 && (h == 0 || h == y - 1))
				ft_putchar('C');
			else if (((h == 0 || h == y - 1) && (l > 0 && l < x - 1)) ||
					((l == 0 || l == x - 1) && (h > 0 && h < y - 1)))
				ft_putchar('B');
			else
				ft_putchar(' ');
			l++;
		}
		l = 0;
		ft_putchar('\n');
		h++;
	}
}
