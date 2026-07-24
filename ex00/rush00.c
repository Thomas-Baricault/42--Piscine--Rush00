/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaricau <tbaricau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 10:12:20 by tbaricau          #+#    #+#             */
/*   Updated: 2025/08/30 15:20:31 by tbaricau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	width;
	int	height;

	width = x;
	height = y;
	while (y > 0)
	{
		while (x > 0)
		{
			if ((x == 1 || x == width) && (y == 1 || y == height))
				ft_putchar('o');
			else if (x == 1 || x == width)
				ft_putchar('|');
			else if (y == 1 || y == height)
				ft_putchar('-');
			else
				ft_putchar(' ');
			x--;
		}
		ft_putchar('\n');
		x = width;
		y--;
	}
	return ;
}
