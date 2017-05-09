/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoporan <dsoporan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 17:44:52 by dsoporan          #+#    #+#             */
/*   Updated: 2017/01/12 17:58:25 by dsoporan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	ft_swap_bits(unsigned char octet)
{
	unsigned char first;
	unsigned char second;
	unsigned char final;

	first = octet << 4;
	second = octet >> 4;
	final = first | second;
	return (final);
}
