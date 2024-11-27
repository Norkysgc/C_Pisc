/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norkygon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 17:15:26 by norkygon          #+#    #+#             */
/*   Updated: 2024/11/27 12:45:16 by norkygon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 2;
	b = 5;
	printf ("Before the swap : %d \n", a);
	printf ("Before the swap : %d\n", b);

	ft_swap ( &a, &b);
	printf ("After the swap : %d \n",a);
	printf ("After the swap : %d \n",b);

	return(0);
}
*/