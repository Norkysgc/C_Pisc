/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norkygon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 17:15:26 by norkygon          #+#    #+#             */
/*   Updated: 2024/11/27 19:35:20 by norkygon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	c;
	int	d;

	c = a / b;
	d = a % b;
	*div = c;
	*mod = d;
}
/*
int main(void)
{
	int number_one = 15;
    int number_two = 2;
    
	int div_result;
    
	int mod_result; ft_div_mod(number_one, number_two, &div_result, &mod_result);

    printf("Div of number_one/number_two : %d\n", div_result);
    printf("Mod of number_one/number_two : %d\n", mod_result);
}
*/
