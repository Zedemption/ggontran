/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <abary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/05 18:59:58 by abary             #+#    #+#             */
/*   Updated: 2015/09/19 20:32:18 by alafosse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	display_rectangle(int x, int y, int xmax, int ymax)
{
	if ((x == xmax || x == 1) && (y == ymax || y == 1))
	{
		ft_putchar('o');
	}
	else if (x == xmax || x == 1)
	{
		ft_putchar('|');
	}
	else if (y == ymax || y == 1)
	{
		ft_putchar('-');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	colle(int x, int y)
{
	int xmax;
	int ymax;

	xmax = x;
	ymax = y;
	if (x > 0)
	{
		while (y > 0)
		{
			x = xmax;
			while (x > 0)
			{
				display_rectangle(x, y, xmax, ymax);
				x--;
			}
			ft_putchar('\n');
			y--;
		}
	}
}
