/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_mods.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoporan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 15:06:14 by dsoporan          #+#    #+#             */
/*   Updated: 2017/05/05 15:52:12 by dsoporan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	init_flags(t_mod *flag)
{
	flag->dot_mod = 0;
	flag->h_mod = 0;
	flag->hh_mod = 0;
	flag->l_mod = 0;
	flag->ll_mod = 0;
	flag->z_mod = 0;
	flag->j_mod = 0;
	flag->hash_mod = 0;
	flag->minus_mod = 0;
	flag->zero_mod = 0;
	flag->plus_mod = 0;
	flag->space_mod = 0;
	flag->width = 0;
	flag->specifier = 48;
	flag->precision = 0;
	flag->procent = 0;
	flag->wild_width = 0;
	flag->wild_precision = 0;
	flag->wld_psize = 0;
	flag->wld_wsize = 0;
	init_flags2(flag);
}

void	process_precision(char *inside, t_mod *data)
{
	int i;

	i = 0;
	while (inside[i])
	{
		if (inside[i] == '.' && ft_isdigit(inside[i + 1]))
			data->precision = 1;
		else if (inside[i] > '0' && inside[i] <= '9')
			data->width = 1;
		i++;
	}
}

void	process_hhll_mods(char *inside, t_mod *data)
{
	int i;

	i = 0;
	while (inside[i])
	{
		if (inside[i] == 'h' && inside[i + 1] == 'h')
		{
			data->hh_mod = 1;
			data->h_mod = 0;
		}
		else if (inside[i] == 'l' && inside[i + 1] == 'l')
		{
			data->ll_mod = 1;
			data->l_mod = 0;
		}
		i++;
	}
}

void	process_mods(char *inside, t_mod *data)
{
	int i;

	i = 0;
	while (inside[i])
	{
		if (inside[i] == 'h' && inside[i + 1] != 'h')
			data->h_mod = 1;
		else if (inside[i] == 'l' && inside[i + 1] != 'l')
			data->l_mod = 1;
		else if (inside[i] == 'j')
			data->j_mod = 1;
		else if (inside[i] == 'z')
			data->z_mod = 1;
		i++;
	}
	process_hhll_mods(inside, data);
}

int		is_mod(char c)
{
	if (c == 'h' || c == 'l' || c == 'j' || c == 'z')
		return (1);
	return (0);
}
