/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adde-oli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 19:01:26 by adde-oli          #+#    #+#             */
/*   Updated: 2023/08/27 21:01:27 by adde-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	res;

	div = *a / *b;
	res = *a % *b;
	*a = div;
	*b = res;
}

int     main() {

        int a = 10;
        int b = 2;
        ft_ultimate_mod(&a, &b);
        printf("%d\n", a);
        printf("%d\n", b);
        return 0;
}
