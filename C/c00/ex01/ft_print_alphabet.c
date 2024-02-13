/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adde-oli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 15:30:21 by adde-oli          #+#    #+#             */
/*   Updated: 2023/08/29 10:29:30 by adde-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	init_letter;

	init_letter = 'a';
	while (init_letter <= 'z')
	{
		write(1, &init_letter, 1);
		init_letter++;
	}
}

int	main()
{
	ft_print_alphabet();
}
