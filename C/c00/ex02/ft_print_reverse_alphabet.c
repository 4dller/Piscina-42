/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adde-oli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 15:00:28 by adde-oli          #+#    #+#             */
/*   Updated: 2023/08/29 10:56:31 by adde-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	init_letter;

	init_letter = 'z';
	while (init_letter >= 'a')
	{
		write(1, &init_letter, 1);
		init_letter--;
		'\n';
	}
	
}

int	main()
{
	ft_print_reverse_alphabet();
}
