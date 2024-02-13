/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adde-oli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:40:35 by adde-oli          #+#    #+#             */
/*   Updated: 2023/08/30 17:57:52 by adde-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 127))
		{
			return (0);
		}
			i++;
	}	
	return (1);
}

/*
int	main()
{
	char str [] = "Mymoon95";
	int result = ft_str_is_printable(str);
	
	if (result == 1)
	{ printf ("1: essa string é printavel");}
	else
	{printf ("0: essa stringnõ é printavel");}

	return 0;
}*/	
