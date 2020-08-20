/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armendes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 09:29:24 by armendes          #+#    #+#             */
/*   Updated: 2020/08/18 09:33:35 by armendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H

# include <unistd.h>

int		plus(int x, int y);
int		minus(int x, int y);
int		divide(int x, int y);
int		times(int x, int y);
int		modulo(int x, int y);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_strcmp(char *s1, char *s2);

#endif
