/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeepach <gyeepach@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 16:24:57 by gyeepach          #+#    #+#             */
/*   Updated: 2024/04/20 18:24:30 by gyeepach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_puthexa(unsigned long long n, int base)
{
	int		i;

	if (n == 0)
		i += write(1, '0', 1);
	if (n >= 16)
	{
		i += ft_puthexa(n / 16, base);
		i += ft_puthexa(n % 16, base);
	}
	else
	{
		if (n < 10)
		{
			c = n + '0';
			i += write(1, &c, 1);
		}
		else
		{
			if (base)
				i += write(1, &"0123456789ABCDEF"[n % 16], 1);
			else
				i += write(1, &"0123456789abcdef"[n % 16], 1);
		}
	}
	return (i);
}