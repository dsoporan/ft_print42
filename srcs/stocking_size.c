/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stocking_size.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoporan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 15:06:33 by dsoporan          #+#    #+#             */
/*   Updated: 2017/05/05 15:07:21 by dsoporan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	stock_lungime(t_mod *data, int len)
{
	int i;

	i = 0;
	while (len > 0)
	{
		data->lungime[i++] = ' ';
		len--;
	}
	data->lungime[i] = '\0';
}

void	stock_width(t_mod *data)
{
	int		len;
	int		i;
	int		k;
	int		p_size;

	i = 0;
	len = 0;
	k = ft_strlen(data->result);
	p_size = get_precision(data->choped);
	if (data->result[0] == '\0' || data->plus_mod == 1)
		k++;
	if (p_size >= k && p_size > 0 && !no_strings(data))
		len = get_width(data->choped) - p_size;
	else if (data->dot_mod == 1 && (data->specifier == 's' || \
				data->result[0] == '0'))
		len = get_width(data->choped);
	else
		len = get_width(data->choped) - k;
	if (len > 0)
		stock_lungime(data, len);
}

void	stock_precision(t_mod *data)
{
	int		len;
	char	*tmp;
	int		i;

	i = 0;
	len = 0;
	if (ft_strchr(data->result, '-'))
		len = get_precision(data->choped) - ft_strlen(data->result) + 1;
	else
		len = get_precision(data->choped) - ft_strlen(data->result);
	if (len > 0)
	{
		tmp = ft_memalloc(len);
		while (len > 0)
		{
			tmp[i++] = '0';
			len--;
		}
		tmp[i] = '\0';
		data->precizie = ft_strdup(tmp);
		free(tmp);
	}
}
