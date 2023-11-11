/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azainabi <azainabi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 22:23:42 by azainabi          #+#    #+#             */
/*   Updated: 2023/11/11 20:58:41 by azainabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	size(unsigned long n)
{
	int			count;
	long long	nl;

	nl = n;
	count = 0;
	if (nl == 0)
		count = 1;
	while (nl)
	{
		nl /= 10;
		count += 1;
	}
	return (count);
}

static void	ft_putnbr(unsigned long n)
{
	char				nb;
	unsigned long long	i;

	i = n;
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

int	ft_print_unsigned(unsigned long nb)
{
	ft_putnbr(nb);
	return (size(nb));
}
