/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_adr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 22:13:54 by nel-hark          #+#    #+#             */
/*   Updated: 2022/11/13 00:21:30 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_adr(unsigned long long n)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = "0123456789abcdef";
	if (n > 15)
	{
		i += ft_adr(n / 16);
		i += ft_adr(n % 16);
	}
	else
		i += ft_putchar(ptr[n]);
	return (i);
}
