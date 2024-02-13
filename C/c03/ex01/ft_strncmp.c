/* ************************************************************************** i*/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adde-oli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 17:08:39 by adde-oli          #+#    #+#             */
/*   Updated: 2023/09/06 17:41:19 by adde-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]) && i < n - 1)
		i++;
	if (n == 0)
	{
		return (0);
	}
	else
	{
		return (s1[i] - s2[i]);
	}
}

int main () 
{
	printf("Exercicios 01: ft_strncmp \n\n");

	char s1[] = "adller", s2[] = "adlle";

	int n = 6;

	printf("Result: %d\n\n", ft_strncmp(s1, s2, n));

	return 0;
}
