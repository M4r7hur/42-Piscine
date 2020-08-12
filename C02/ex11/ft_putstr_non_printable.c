/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armendes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 18:05:46 by armendes          #+#    #+#             */
/*   Updated: 2020/08/12 10:33:55 by armendes         ###   ########.fr       */
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
	char			*str;

	i = 0;
	str = "0123456789abcdef";
	while (str[i])
	{
		if (str[i] < 32 || str[i] == 127)
		{
			x = (unsigned char)str[i];
			ft_putchar('\\');
			ft_putchar(str[(int)a / 16]);
			ft_putchar(str[(int)a % 16]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
