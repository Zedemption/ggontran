/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle04.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanain <vdanain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/06 17:02:32 by vdanain           #+#    #+#             */
/*   Updated: 2015/09/06 18:10:24 by vdanain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	display_rectangle(int x, int y, int xmax, int ymax)
{
	if ((x == xmax && y == ymax) || ((x == 1 && y == 1)
				&& (x != xmax && y != ymax)))
	{
		ft_putchar('A');
	}
	else if ((x == xmax && y == 1) || (y == ymax && x == 1))
	{
		ft_putchar('C');
	}
	else if (x == xmax || x == 1 || y == ymax || y == 1)
	{
		ft_putchar('B');
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
