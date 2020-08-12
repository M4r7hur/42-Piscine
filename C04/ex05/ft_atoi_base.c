/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armendes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 17:23:10 by armendes          #+#    #+#             */
/*   Updated: 2020/08/07 13:35:44 by armendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_base(char *base)
{
	int i;
	int j;
	int length_base;

	i = 0;
	length_base = ft_strlen(base);
	if (length_base <= 1)
		return (0);
	while (base[i])
	{
		j = i + 1;
		while (j <= length_base)
		{
			if (base[i] == base[j] || base[i] == '+' || base[i] == '-' ||
					base[i] == 32 || base[i] == '\f' || base[i] == '\n' ||
					base[i] == '\r' || base[i] == '\t' || base[i] == '\v')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	skip(char *str)
{
	int i;

	i = 0;
	while (str[i] && (str[i] == 32 || str[i] == '\f' || str[i] == '\n' ||
				str[i] == '\r' || str[i] == '\t' || str[i] == '\v'))
		i++;
	return (i);
}

int	give_nb(char c, char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int i;
	int nbr;
	int sign;

	nbr = 0;
	sign = 1;
	if (check_base(base) == 1)
	{
		i = skip(str);
		while (str[i] && (str[i] == '-' || str[i] == '+'))
		{
			if (str[i] == '-')
				sign *= -1;
			i++;
		}
		while (str[i] && give_nb(str[i], base) >= 0)
		{
			nbr = nbr * ft_strlen(base) + give_nb(str[i], base);
			i++;
		}
		return (nbr * sign);
	}
	else
		return (nbr);
}
