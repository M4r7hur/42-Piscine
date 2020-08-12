/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armendes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 15:19:37 by armendes          #+#    #+#             */
/*   Updated: 2020/08/04 15:52:19 by armendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	first;
	char	second;
	char	third;

	first = 47;
	while (++first <= 55)
	{
		second = first;
		while (++second <= 56)
		{
			third = second;
			while (++third <= 57)
			{
				ft_putchar(first);
				ft_putchar(second);
				ft_putchar(third);
				if (first != 55)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}
