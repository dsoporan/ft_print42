/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoporan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/09 14:26:53 by dsoporan          #+#    #+#             */
/*   Updated: 2017/05/09 14:26:54 by dsoporan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_base(int n, int base)
{
	char	*str;
	char	*q;
	int		i;

	i = 0;
	str = (char*)malloc(sizeof(str) * 100);
	q = "0123456789abcdef";
	if (n <= 0)
		return (ft_itoa(n));
	while (n)
	{
		str[i] = q[n % base];
		n = n / base;
		i++;
	}
	str[i] = '\0';
	ft_strrev(str);
	return (str);
}
