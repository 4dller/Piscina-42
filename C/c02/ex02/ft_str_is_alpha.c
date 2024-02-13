/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adde-oli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 16:54:49 by adde-oli          #+#    #+#             */
/*   Updated: 2023/09/02 17:36:11 by adde-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= 'a' && str[i] <= 'z'))
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
    char str[] = "Shambles0 ";
    int result = ft_str_is_alpha(str);

    if (result == 1) {
        printf("1 : A string tem apenas letras.\n");
    } else {
        printf("0 : A string tem caracteres não alfabéticos.\n");
    }
    return 0;
}
     */
