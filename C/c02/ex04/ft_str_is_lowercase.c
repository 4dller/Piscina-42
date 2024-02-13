/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adde-oli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:23:41 by adde-oli          #+#    #+#             */
/*   Updated: 2023/08/30 12:37:30 by adde-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
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
	char str [] = "mymoonandmysun1";
	int result = ft_str_is_lowercase(str);

	if (result == 1)
	{
		printf ("1: A string só possui caracteres minusculos");
	}else
	{
		printf ("0: A String possui outros caracteres");
	}
	return 0;
}

*/
