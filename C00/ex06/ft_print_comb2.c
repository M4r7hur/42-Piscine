/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armendes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 15:53:32 by armendes          #+#    #+#             */
/*   Updated: 2020/08/04 16:06:54 by armendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int number)
{
	if (number < 10)
	{
		ft_putchar(48);
		ft_putchar(number + 48);
	}
	else
	{
		ft_putchar(number / 10 + 48);
		ft_putchar(number % 10 + 48);
	}
}

void	ft_print_comb2(void)
{
	int first;
	int second;

	first = -1;
	while (++first <= 98)
	{
		second = first;
		while (++second <= 99)
		{
			ft_print(first);
			ft_putchar(' ');
			ft_print(second);
			if (first != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}
