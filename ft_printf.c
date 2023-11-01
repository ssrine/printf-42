/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 20:56:12 by nel-hark          #+#    #+#             */
/*   Updated: 2022/11/14 22:25:54 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *f, ...)
{
	va_list	ptr;
	int		i;
	int		c;

	i = 0;
	c = 0;
	va_start(ptr, f);
	while (f[i])
	{
		if (f[i] == '%')
		{
			i++;
			c += ft_forma(f[i], ptr);
		}
		else
			c += ft_putchar(f[i]);
		if (!f[i])
			break ;
		i++;
	}
	va_end(ptr);
	return (c);
}
