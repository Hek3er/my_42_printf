/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azainabi <azainabi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 21:27:47 by azainabi          #+#    #+#             */
/*   Updated: 2023/11/11 20:59:16 by azainabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_print_digit(int nb);
int		ft_print_unsigned(unsigned long nb);
size_t	ft_strlen(char *str);
int		ft_print_lhex(unsigned int nb);
int		ft_print_uhex(unsigned int nb);
int		ft_print_p(void *number);

#endif