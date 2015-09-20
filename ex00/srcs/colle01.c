/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanain <vdanain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/06 14:32:39 by vdanain           #+#    #+#             */
/*   Updated: 2015/09/06 15:05:52 by vdanain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	display_rectangle(int x, int y, int xmax, int ymax)
{
	if ((x == xmax && y == ymax) || ((y == 1 && x == 1)
				&& (x != xmax && y != ymax)))
	{
		ft_putchar('/');
	}
	else if ((y == ymax && x == 1) || (y == 1 && x == xmax))
	{
		ft_putchar('\\');
	}
	else if (x == xmax || x == 1 || y == ymax || y == 1)
	{
		ft_putchar('*');
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
