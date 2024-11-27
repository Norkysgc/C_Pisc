/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norkygon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 18:17:05 by norkygon          #+#    #+#             */
/*   Updated: 2024/11/27 19:36:00 by norkygon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;
	int	d;

	c = *a / *b;
	d = *a % *b;
	*a = c;
	*b = d;
}
/*
int main ()
{
	int div_result;
	
	div_result = 10;
	
	int *a;
	
	a = &div_result;
	
	int	mod_result;
	
	mod_result = 2;
	
	int *b;
	
	b = &mod_result;
	
	ft_ultimate_div_mod(a, b);

	printf("Division's result = %d\n", div_result);
	printf("Mod's result = %d\n", mod_result);
}
*/
