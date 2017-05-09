/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoporan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 14:48:25 by dsoporan          #+#    #+#             */
/*   Updated: 2017/05/09 16:25:02 by dsoporan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include "includes/libft.h"

int main()
{
	unsigned long long	int	i = ULLONG_MAX;
	ft_printf("Character : %c Character2: %c", 'c', 'd');
	ft_printf("\n");
	printf("Character : %c Character2: %c", 'c', 'd');
	printf("\n");

	ft_printf("digit/number : %d", 123);
	ft_printf("\n");
	printf("digit/number : %d", 123);
	printf("\n");

	ft_printf("String : %s", "ana are mere");
	ft_printf("\n");
	printf("String : %s", "ana are mere");
	printf("\n");

	ft_printf("unsigned : %o", 4147483648);
	ft_printf("\n");
	printf("unsigned : %lo", 4147483648);
	printf("\n");

	ft_printf("modulo : %%");
	ft_printf("\n");
	printf("modulo : %%");
	printf("\n");

	ft_printf("hex mare: %X", 3147483647);
	ft_printf("\n");
	printf("hex mare: %lX", 3147483647);
	printf("\n");

	ft_printf("hex mic: %x\n", 3147483647);
	ft_printf("\n");
	printf("hex mic: %lx\n", 3147483647);
	printf("\n");

	ft_printf("oct: %o", 3147483647);
	ft_printf("\n");
	printf("oct: %lo", 3147483647);
	printf("\n");

	ft_printf("dec long: %D", LONG_MAX);
	ft_printf("\n");
	printf("dec long: %ld", LONG_MAX);
	printf("\n");

	ft_printf("oct long: %O", LONG_MAX);
	ft_printf("\n");
	printf("oct long: %lo", LONG_MAX);
	printf("\n");

	ft_printf("ld_min: %ld", LONG_MIN);
	ft_printf("\n");
	printf("ld_min: %ld", LONG_MIN);
	printf("\n");

	ft_printf("ld_max: %ld", LONG_MAX);
	ft_printf("\n");
	printf("ld_max: %ld", LONG_MAX);
	printf("\n");

	ft_printf("darian%ddarian%ddarian\n", 10,10);
	ft_printf("llong : %lld\n", LLONG_MIN);
	printf("darian%ddarian%ddarian\n", 10,10);
	printf("llong : %lld\n", LLONG_MIN);

	ft_printf("\n");
	ft_printf("ptr_max: %p\n",  &i);
	printf("ptr_max: %p\n",  &i);

	ft_printf("u_max: %u\n", UINT_MAX);
	printf("u_max: %u\n", UINT_MAX);

	ft_printf("ul_max: %U\n", ULONG_MAX);
	printf("ul_max: %lU\n", ULONG_MAX);

	ft_printf("%-5%");
	printf("\n");
	printf("%-5%");

	return (0);
}
