/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adde-oli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 11:39:23 by adde-oli          #+#    #+#             */
/*   Updated: 2023/09/02 20:28:35 by adde-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*
int main () {

		char str [] = "948231529";
		int result = ft_str_is_numeric(str);

		if (result == 1)
		{
			printf ("1: Essa string é apenas numérica");
		}else
		{	printf ("0: Essa string não é numerica");
		}
			return 0;
		}

*/
