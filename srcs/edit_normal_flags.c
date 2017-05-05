/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   edit_normal_flags.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoporan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 15:05:47 by dsoporan          #+#    #+#             */
/*   Updated: 2017/05/05 15:07:12 by dsoporan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	case_space(t_mod *data)
{
	if (ft_strchr(data->result, '-') == NULL && (data->specifier == 'D' || \
				data->specifier == 'd' || data->specifier == 'i') && \
			data->width == 0)
		data->result = ft_strjoin(" ", data->result);
	else if (ft_strchr(data->result, '-') == NULL && \
			(data->specifier == 'D' || data->specifier == 'd' || \
			data->specifier == 'i') && data->width == 1 && \
			data->zero_mod == 1)
	{
		data->result[0] = ' ';
	}
}

void	case_zero(t_mod *data)
{
	int i;
	int len;

	i = 0;
	len = ft_strlen(data->lungime);
	while (i < len)
	{
		data->lungime[i] = '0';
		i++;
	}
	if (ft_strchr(data->result, '-'))
	{
		make_positive(data);
		data->lungime = ft_strjoin("-", data->lungime);
	}
}

void	case_dot(t_mod *data)
{
	if (data->result[0] == '0' && !(data->hash_mod == 1 && \
				(data->specifier == 'o' || data->specifier == 'O')))
		data->result = ft_strdup("");
	else if (data->specifier == 's' || (data->specifier == 'c' && \
				data->result[0] == '\0'))
		data->result = ft_strdup("");
	if (data->specifier == 'p')
		data->result = ft_strjoin("0x", data->result);
}

int		no_strings(t_mod *data)
{
	if (data->specifier == 'S' || data->specifier == 's' || \
			data->specifier == 'c' || data->specifier == 'C')
		return (1);
	return (0);
}

void	edit_strings_precision(t_mod *data)
{
	int		p_size;
	int		len;
	char	*aux;

	p_size = get_precision(data->choped);
	len = (int)ft_strlen(data->result);
	aux = ft_memalloc(len);
	if (p_size < len)
	{
		aux = ft_strncpy(aux, data->result, p_size);
		data->result = ft_strdup("");
		data->result = ft_strdup(aux);
	}
}
