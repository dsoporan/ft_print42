/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoporan <dsoporan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 17:32:27 by dsoporan          #+#    #+#             */
/*   Updated: 2017/01/12 17:32:28 by dsoporan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*d;

	d = (char *)s;
	i = 0;
	while (d[i])
	{
		if (d[i] == c)
			return (d + i);
		i++;
	}
	if (c == '\0')
		return (d + i);
	return (0);
}
