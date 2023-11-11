/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_lhex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azainabi <azainabi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 22:28:15 by azainabi          #+#    #+#             */
/*   Updated: 2023/11/11 12:04:52 by azainabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	rev_print(char *str)
{
	size_t	i;

	i = ft_strlen(str);
	while (i > 0)
	{
		i--;
		write(1, &str[i], 1);
	}
}

int	ft_print_lhex(unsigned int nb)
{
	int		i;
	int		j;
	char	*base;
	char	result[100];

	i = 0;
	base = "0123456789abcdef";
	if (nb == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	while (nb)
	{
		j = nb % 16;
		result[i] = base[j];
		nb /= 16;
		i++;
	}
	result[i] = '\0';
	rev_print(result);
	return ((int)ft_strlen(result));
}
