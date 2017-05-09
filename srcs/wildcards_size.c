/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wildcards_size.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoporan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 15:06:53 by dsoporan          #+#    #+#             */
/*   Updated: 2017/05/09 15:37:26 by dsoporan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		get_wild_precision(va_list *arg)
{
	int		p_size;

	p_size = va_arg(*arg, int);
	return (p_size);
}

int		get_wild_width(va_list *arg)
{
	int w_size;

	w_size = va_arg(*arg, int);
	return (w_size);
}

char	*stock_damn_width(char *width, int len)
{
	int i;

	i = 0;
	while (len > 0)
	{
		width[i++] = ' ';
		len--;
	}
	width[i] = '\0';
	return (width);
}
