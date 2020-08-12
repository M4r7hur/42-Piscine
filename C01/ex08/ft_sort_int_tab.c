/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armendes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 14:06:38 by armendes          #+#    #+#             */
/*   Updated: 2020/08/05 16:23:43 by armendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int nb_compare;
	int count;

	nb_compare = size - 1;
	count = -1;
	while (nb_compare-- > 0)
	{
		while (count++ < nb_compare)
		{
			if (tab[count] > tab[count + 1])
			{
				ft_swap(&tab[count], &tab[count + 1]);
			}
		}
		count = -1;
	}
}
