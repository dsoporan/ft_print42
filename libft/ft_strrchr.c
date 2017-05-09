/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoporan <dsoporan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 17:36:17 by dsoporan          #+#    #+#             */
/*   Updated: 2017/01/12 17:36:18 by dsoporan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*d;

	i = 0;
	d = (char *)s;
	while (d[i])
		i++;
	while (i >= 0)
	{
		if (d[i] == c)
			return (d + i);
		i--;
	}
	return (0);
}
