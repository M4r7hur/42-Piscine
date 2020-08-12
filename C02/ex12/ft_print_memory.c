/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armendes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 10:34:28 by armendes          #+#    #+#             */
/*   Updated: 2020/08/12 10:36:52 by armendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	aff_addr(long int addr)
{
	char *hex;

	hex = "0123456789abcdef";
	if (addr >= 16)
		aff_addr(addr / 16);
	ft_putchar(hex[addr % 16]);
}

void	aff_hex(char *str)
{
	char	*hex;
	int		i;

	i = 0;
	hex = "0123456789abcdef";
	while (str[i] && i < 16)
	{
		ft_putchar(hex[str[i] / 16]);
		ft_putchar(hex[str[i] % 16]);
		if (i % 2 == 1)
			ft_putchar(' ');
		i++;
	}
	while (i < 16)
	{
		ft_putchar(' ');
		i++;
	}
}

void	aff(char *str)
{
	int i;

	i = 0;
	while (str[i] && i < 16)
	{
		if (str[i] < 32 || str[i] == 127)
			ft_putchar('.');
		else
			ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	char		*str;
	long int	memory;
	int			sizen;
	int			i;

	memory = (long int)addr;
	str = (char *)addr;
	sizen = (int)size;
	i = 0;
	while (sizen > 0)
	{
		aff_addr(memory);
		write(1, ": ", 2);
		aff_hex(&str[i]);
		aff(&str[i]);
		i += 16;
		memory += 16;
		sizen -= 16;
	}
	return (addr);
}
