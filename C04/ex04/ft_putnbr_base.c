/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seciurte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 17:44:04 by seciurte          #+#    #+#             */
/*   Updated: 2020/08/09 10:09:05 by seciurte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		check_base(char *str)
{
	long int i;
	long int j;

	i = -1;
	while (str[++i])
	{
		j = -1;
		while (str[++j])
			if ((str[j] == str[i] && j != i) || str[i] == '+' ||
					str[i] == '-' || str[i] < 32 || str[i] == 127)
				return (0);
	}
	if (ft_strlen(str) > 1 && *str)
		return (1);
	else
		return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int nb;

	nb = nbr;
	if (check_base(base) && nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (check_base(base) && nb < ft_strlen(base))
		ft_putchar(base[nb % ft_strlen(base)]);
	if (check_base(base) && nb >= ft_strlen(base))
	{
		ft_putnbr_base(nb / ft_strlen(base), base);
		ft_putchar(base[nb % ft_strlen(base)]);
	}
}
