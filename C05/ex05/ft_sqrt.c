/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armendes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 09:52:30 by armendes          #+#    #+#             */
/*   Updated: 2020/08/13 12:41:07 by armendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long int	i;
	long int	square;
	long int	n;

	i = 0;
	square = i * i;
	n = (long int)nb;
	while (square < n)
	{
		i++;
		square = i * i;
	}
	if (square == n)
		return ((int)i);
	else
		return (0);
}
