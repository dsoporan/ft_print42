/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoporan <dsoporan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 17:36:45 by dsoporan          #+#    #+#             */
/*   Updated: 2017/01/12 17:36:47 by dsoporan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*s;
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	s = (char *)haystack;
	if (needle[0] == '\0')
		return (s);
	if (needle == haystack)
		return (s);
	while (s[i++])
	{
		k = i;
		j = 0;
		while (s[i] == needle[j])
		{
			i++;
			j++;
			if (needle[j] == '\0')
				return (s + k);
		}
	}
	return (0);
}
