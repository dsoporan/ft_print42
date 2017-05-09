/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoporan <dsoporan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 17:35:56 by dsoporan          #+#    #+#             */
/*   Updated: 2017/01/12 17:35:57 by dsoporan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*s;
	size_t	i;

	s = malloc(sizeof(char) * size + 1);
	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		s[i] = '\0';
		i++;
	}
	return (s);
}
