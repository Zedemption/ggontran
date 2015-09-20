/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle-2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npita-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/20 16:03:33 by npita-si          #+#    #+#             */
/*   Updated: 2015/09/20 18:50:11 by npita-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	ft_tabcmp(char *buf, int x, int y)
{
	int	i;
	int	more;
	i = 0;
	more = 0;

	if (ft_strcmp(buf, colle0(x, y)) == 0)
	{
		ft_putresult("[colle-00]", x, y);
		more++;
	}
	if (ft_strcmp(buf, colle1(x, y)) == 0)
	{
		if (more > 0)
			ft_putstr(" || ");
		ft_putresult("[colle-01]", x, y);
		more++;
	}
	if (ft_strcmp(buf, colle2(x, y)) == 0)
	{
		if (more > 0)
			ft_putstr(" || ");
		ft_putresult("[colle-02]", x, y);
		more++;
	}
	if (ft_strcmp(buf, colle3(x, y)) == 0)
	{
		if (more > 0)
			ft_putstr(" || ");
		ft_putresult("[colle-03]", x, y);
		more++;
	}
	if (ft_strcmp(buf, colle4(x, y)) == 0)
	{
		if (more > 0)
			ft_putstr(" || ");
		ft_putresult("[colle-04]", x, y);
		more++;
	}
	if (more == 0)
		ft_putstr("aucune");
	ft_putchar('\n');
}
