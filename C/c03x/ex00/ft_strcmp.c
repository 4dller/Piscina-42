/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adde-oli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 16:45:57 by adde-oli          #+#    #+#             */
/*   Updated: 2023/09/05 19:55:03 by adde-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && (s1[i] == s2[i]))
	{
		i++;
	}
	return ((s1[i] - s2[i]));
}
/*
int main() {
	
	printf("Exercicio 00: ft_strcmp \n");
	
	char str1[] = "17", str2[] = "9";

	printf("Result: %d\n", ft_strcmp( str1, str2));

	return (0);
}
*/
