/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_digit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azainabi <azainabi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 22:14:19 by azainabi          #+#    #+#             */
/*   Updated: 2023/11/11 20:58:14 by azainabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	size(int n)
{
	int			count;
	long long	nl;

	nl = n;
	count = 0;
	if (nl == 0)
		count = 1;
	if (nl < 0)
	{
		nl *= -1;
		count += 1;
	}
	while (nl)
	{
		nl /= 10;
		count += 1;
	}
	return (count);
}

static void	ft_putnbr(int n)
{
	char		nb;
	long long	i;

	i = n;
	if (i < 0)
	{
		write(1, "-", 1);
		i *= -1; 
	}
	if (i <= 9)
	{
		nb = i + 48;
		write(1, &nb, 1);
	}
	else
	{
		ft_putnbr(i / 10); 
		ft_putnbr(i % 10); 
	}
}

int	ft_print_digit(int nb)
{
	ft_putnbr(nb);
	return (size(nb));
}
