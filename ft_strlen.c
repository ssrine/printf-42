/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:38:02 by nel-hark          #+#    #+#             */
/*   Updated: 2022/11/12 23:37:04 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *str)

{
	size_t	a;

	a = 0;
	while (str && str[a] != '\0')
	{
		a++;
	}
	return (a);
}
