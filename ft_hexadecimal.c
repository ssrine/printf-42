/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:17:20 by nel-hark          #+#    #+#             */
/*   Updated: 2022/11/12 23:42:21 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexadicimal(char b, unsigned int c)
{
	char	*hex;
	int		count;

	count = 0;
	if (b == 'x')
		hex = "0123456789abcdef";
	else
		hex = "0123456789ABCDEF";
	if (c > 15)
	{
		count += ft_hexadicimal(b, c / 16);
		count += ft_hexadicimal(b, c % 16);
	}
	else
		count += ft_putchar(hex[c % 16]);
	return (count);
}
