/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_flags.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoporan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 15:06:09 by dsoporan          #+#    #+#             */
/*   Updated: 2017/05/05 15:46:26 by dsoporan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	process_dot_mod(char *inside, t_mod *data)
{
	int i;

	i = 0;
	while (inside[i])
	{
		if (inside[i] == '.' && (!ft_isdigit(inside[i + 1]) || \
					inside[i + 1] == '0') && inside[i + 1] != '*')
			data->dot_mod = 1;
		i++;
	}
}

void	process_wildcard(char *inside, t_mod *data)
{
	int i;

	i = 0;
	while (inside[i])
	{
		if (inside[i] == '*' && inside[i - 1] != '.')
			data->wild_width = 1;
		else if (inside[i] == '*' && inside[i - 1] == '.')
			data->wild_precision = 1;
		i++;
	}
}

void	process_flags(char *inside, t_mod *data)
{
	int i;

	i = -1;
	init_flags(data);
	while (inside[++i])
	{
		if (inside[i] == '#')
			data->hash_mod = 1;
		else if (inside[i] == '-')
			data->minus_mod = 1;
		else if (inside[i] == '+')
			data->plus_mod = 1;
		else if (inside[i] == '%')
			data->procent = 1;
		else if (inside[i] == ' ')
			data->space_mod = 1;
	}
	if (validate_mod(inside) > 0)
		process_mods(inside, data);
	data->choped = inside;
	process_precision(inside, data);
	process_specifiers(inside, data);
	process_dot_mod(inside, data);
	process_zero_mod(inside, data);
	process_wildcard(inside, data);
}

int		get_precision(char *inside)
{
	int		i;
	char	*precision;
	int		k;

	i = 0;
	k = 0;
	precision = (char*)malloc(sizeof(char) * ft_strlen(inside));
	while (inside[i])
	{
		if (inside[i] == '.')
		{
			i++;
			while (inside[i] >= '0' && inside[i] <= '9')
				precision[k++] = inside[i++];
		}
		i++;
	}
	precision[k] = '\0';
	return (ft_atoi(precision));
}

int		get_width(char *inside)
{
	int		i;
	char	*width;
	int		k;
	int		ok;

	i = 0;
	k = 0;
	ok = 0;
	width = ft_memalloc(ft_strlen(inside));
	while (inside[i])
	{
		if (inside[i] == '.')
			ok = 1;
		if (inside[i] > '0' && inside[i] <= '9' && ok == 0)
		{
			while (ft_isdigit(inside[i]))
				width[k++] = inside[i++];
			break ;
		}
		i++;
	}
	return (ft_atoi(width));
}
