/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:02:00 by nel-hark          #+#    #+#             */
/*   Updated: 2022/11/12 23:48:32 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <string.h>
# include <stddef.h>
# include <stdarg.h>
# include <stdio.h>

int		ft_hexadicimal(char b, unsigned int c);
int		ft_putchar(int c);
int		ft_putnbr(long c);
int		ft_putstr(char *s);
int		ft_adr(unsigned long long n);
size_t	ft_strlen(const char *str);
int		ft_forma(char c, va_list ap);
int		ft_putsigne(unsigned int n);
int		ft_printf(const char *f, ...);
int		digit(long n);
int		safezone(const char *str);
#endif
