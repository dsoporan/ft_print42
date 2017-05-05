/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toa_base.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoporan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 15:10:18 by dsoporan          #+#    #+#             */
/*   Updated: 2017/05/05 16:16:24 by dsoporan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_utoa_base(unsigned int n, int base, char *q)
{
	char	*str;
	int		i;

	str = ft_strnew(32);
	i = 0;
	if (n == 0)
		str[0] = '0';
	while (n)
	{
		str[i++] = q[n % base];
		n = n / base;
	}
	return (ft_strrev(str));
}

char	*ft_lutoa_base(unsigned long n, int base, char *q)
{
	char	*str;
	int		i;

	i = 0;
	str = ft_strnew(32);
	if (n == 0)
		str[0] = '0';
	while (n)
	{
		str[i++] = q[n % base];
		n = n / base;
	}
	return (ft_strrev(str));
}

int		base(t_mod *data)
{
	int		base;

	base = 0;
	if (data->specifier == 'o' || data->specifier == 'O')
		base = 8;
	else if (data->specifier == 'x' || data->specifier == 'X')
		base = 16;
	else
		base = 10;
	return (base);
}

int		is_uox(t_mod *data)
{
	if (data->specifier == 'u')
		return (1);
	else if (data->specifier == 'o')
		return (1);
	else if (data->specifier == 'x')
		return (1);
	return (0);
}
