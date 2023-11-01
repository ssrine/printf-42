/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formas.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 21:00:15 by nel-hark          #+#    #+#             */
/*   Updated: 2022/11/12 23:31:57 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_forma(char c, va_list ap)
{
	int	i;

	i = 0;
	if (c == 'd' || c == 'i')
		i = ft_putnbr(va_arg(ap, int));
	else if (c == 's')
		i = ft_putstr(va_arg(ap, char *));
	else if (c == 'c')
		i = ft_putchar(va_arg(ap, int));
	else if (c == 'u')
		i = ft_putsigne(va_arg(ap, unsigned int));
	else if (c == 'p')
	{
		i += ft_putstr("0x");
		i += ft_adr(va_arg(ap, unsigned long long));
	}
	else if (c == 'x' || c == 'X')
		i = ft_hexadicimal(c, va_arg(ap, long));
	else if (c == '%')
		i = ft_putchar('%');
	return (i);
}
