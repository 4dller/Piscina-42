/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adde-oli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 19:01:39 by adde-oli          #+#    #+#             */
/*   Updated: 2023/08/20 19:01:39 by adde-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	top(int x);
void	middle(int x, int y);
void	bottom(int x);

void	rush(int x, int y)
{
	top(x);
	if (y > 1)
	{
		if (y < 2)
			bottom(x);
		else
		{
			middle(x, y);
			bottom(x);
		}
	}
}

void	top(int x)
{
	int	count_cols;

	count_cols = 1;
	while (count_cols <= x)
	{
		if (count_cols == 1)
			ft_putchar('/');
		else if (count_cols < x)
			ft_putchar('*');
		else if (count_cols == x)
			ft_putchar('\\');
		count_cols++;
	}
	ft_putchar('\n');
}

void	bottom(int x)
{
	int	count_cols;

	count_cols = 1;
	while (count_cols <= x)
	{
		if (count_cols == 1)
			ft_putchar('\\');
		else if (count_cols < x)
			ft_putchar('*');
		else if (count_cols == x)
			ft_putchar('/');
		count_cols++;
	}
}

void	middle(int x, int y)
{
	int	count_rows;
	int	count_cols;
	int	middle;

	count_rows = 1;
	count_cols = 1;
	middle = y - 1;
	while (count_rows < middle)
	{
		while (count_cols <= x)
		{
			if (count_rows < middle && count_cols == 1)
				ft_putchar('*');
			else if (count_rows < middle && count_cols == x)
				ft_putchar('*');
			else if (count_rows < middle && count_cols < x)
				ft_putchar(' ');
			count_cols++;
		}
		count_rows++;
		count_cols = 1;
		ft_putchar('\n');
	}
}
