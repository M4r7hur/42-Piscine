/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armendes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 18:05:46 by armendes          #+#    #+#             */
/*   Updated: 2020/08/13 15:50:12 by armendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	x;
	char			*hex;

	i = 0;
	hex = "0123456789abcdef";
	while (str[i])
	{
		if (str[i] < 32 || str[i] == 127)
		{
			x = (unsigned char)str[i];
			ft_putchar('\\');
			ft_putchar(hex[(int)x / 16]);
			ft_putchar(hex[(int)x % 16]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
