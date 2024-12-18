/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norkygon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 21:01:24 by norkygon          #+#    #+#             */
/*   Updated: 2024/11/21 12:09:25 by norkygon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		n = 'N';
		write(1, &n, 1);
	}
	else
	{
		n = 'P';
		write(1, &n, 1);
	}
}
/*
int main (void)
{
	ft_is_negative(3);
	return (0);
}
*/
