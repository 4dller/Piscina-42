/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adde-oli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:40:35 by adde-oli          #+#    #+#             */
/*   Updated: 2023/08/30 12:55:22 by adde-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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
int main() {
	char str [] = "MYMOON";
	int result = ft_str_is_uppercase(str);

	if (result == 1)
	{
		printf ("1: A string é UPPERCASE!");
	}
	else
	{
		printf ("0: A string não e uppercase!");
	}
	return 0;
}
*/
