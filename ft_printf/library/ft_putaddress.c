/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeepach <gyeepach@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 16:25:38 by gyeepach          #+#    #+#             */
/*   Updated: 2024/03/21 18:54:45 by gyeepach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putaddress(void *p)
{
	int	i;

	i = 0;
	if (p == 0)
		return (write(1, "(nil)", 5));
	i += write(1, "0x", 2);
	i += ft_printhexa((unsigned long long)p, 0);
	return (i);
}