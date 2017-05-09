/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_and_replace.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoporan <dsoporan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 17:43:49 by dsoporan          #+#    #+#             */
/*   Updated: 2017/01/12 17:56:58 by dsoporan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_search_and_replace(char *str, char de_inlocuit, char litera)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == de_inlocuit)
			ft_putchar(litera);
		else
			ft_putchar(str[i]);
		i++;
	}
}
