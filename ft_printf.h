/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <imimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 18:00:19 by imimouni          #+#    #+#             */
/*   Updated: 2022/11/21 11:37:38 by imimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
void	ft_putchar(char c, int *count);
void	ft_putstr(char *s, int *count);
void	ft_converter(char CHAR, va_list ap, int *count);
void	ft_putaddress(unsigned long address, int *count);
void	ft_putbase(unsigned long nbr, char *base, int *count);
void	ft_putnbr(long nbr, int *count);

#endif
