/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armendes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 15:39:26 by armendes          #+#    #+#             */
/*   Updated: 2020/08/18 11:37:08 by armendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int croissant;
	int decroissant;

	i = 0;
	croissant = 0;
	decroissant = 0;
	if (length == 0 || length == 1)
		return (1);
	while (i + 1 < length)
	{
		if ((*f)(tab[i], tab[i + 1]) > 0)
			croissant = 1;
		i++;
	}
	i = 0;
	while (i + 1 < length)
	{
		if ((*f)(tab[i], tab[i + 1]) < 0)
			decroissant = 1;
		i++;
	}
	if (croissant == 0 || decroissant == 0)
		return (1);
	return (0);
}
