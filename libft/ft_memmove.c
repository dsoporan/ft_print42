/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoporan <dsoporan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 17:22:07 by dsoporan          #+#    #+#             */
/*   Updated: 2017/01/12 17:22:09 by dsoporan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;
	unsigned char	temp[n];

	i = 0;
	s1 = (unsigned char *)src;
	s2 = (unsigned char *)dest;
	while (i < n)
	{
		temp[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		s2[i] = temp[i];
		i++;
	}
	return (dest);
}
