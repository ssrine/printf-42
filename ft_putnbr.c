/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 17:53:07 by nel-hark          #+#    #+#             */
/*   Updated: 2022/11/12 23:35:52 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long c)
{
	char	i;

	if (c < 0)
	{
		ft_putchar('-');
		ft_putnbr(c * -1);
	}
	else if (c > 9)
	{
		ft_putnbr((c / 10));
		ft_putnbr((c % 10));
	}
	else
	{
		i = c + 48;
		write(1, &i, 1);
	}
	return (digit(c));
}
