/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   choping_format.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoporan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 15:05:13 by dsoporan          #+#    #+#             */
/*   Updated: 2017/05/05 15:13:53 by dsoporan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		is_flag(const char *format, int *k)
{
	int i;

	i = *k;
	if (ft_strchr(FLAGS, format[i]) != NULL)
		return (1);
	return (0);
}

int		is_specifier(const char *format, int *k)
{
	int i;

	i = *k;
	if (ft_strchr(SPECIFIERS, format[i]) != NULL)
		return (1);
	return (0);
}

char	*chop_format(const char *format, unsigned long int *i)
{
	char	*inside;
	int		j;
	int		k;

	j = 0;
	k = *i;
	k++;
	inside = (char*)malloc(sizeof(char) * ft_strlen(format));
	while (format[k])
	{
		if (is_flag(format, &k) == 0 && is_specifier(format, &k) == 0)
			return (inside);
		else if (is_specifier(format, &k))
		{
			inside[j] = format[k];
			j++;
			break ;
		}
		else if (is_flag(format, &k))
			inside[j++] = format[k];
		k++;
	}
	inside[j] = '\0';
	return (inside);
}

void	init_flags2(t_mod *flag)
{
	flag->chr = '0';
	flag->result = ft_memalloc(1000);
	flag->wstr = (wchar_t*)malloc(sizeof(wchar_t) * 200);
	flag->choped = ft_memalloc(20);
	flag->precizie = ft_memalloc(200);
	flag->lungime = ft_memalloc(200);
}
