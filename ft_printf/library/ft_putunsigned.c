/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeepach <gyeepach@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 16:34:45 by gyeepach          #+#    #+#             */
/*   Updated: 2024/04/20 18:26:24 by gyeepach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putunsigned(unsigned int n)
{
	int	i;
	char c;

	i = 0;
	if (n >= 10)
	{
		i += ft_putunsigned(n / 10);
		c = (n % 10) + '0';
		i += write(1, &c, 1);
	}
	else
	{
		c = n + '0';
		i += write(1, &c, 1);
	}
	return (i);
}