/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoporan <dsoporan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 17:17:57 by dsoporan          #+#    #+#             */
/*   Updated: 2017/01/12 17:17:58 by dsoporan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*s;

	if (!size)
		return (0);
	s = malloc(sizeof(*s) * size);
	if (!s)
		return (0);
	s = ft_memset(s, 0, size);
	return (s);
}
