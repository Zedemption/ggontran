/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npita-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/20 18:54:25 by npita-si          #+#    #+#             */
/*   Updated: 2015/09/20 19:09:42 by npita-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1,char *s2);
{
	int		i;
	int		result;

	result = 0;
	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		result = result + s1[i] - s2[i];
		if (result != 0)
		{
			return (1);
		}
		i++;
	}
	return (result);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i = i + 1;
	}
}

void	ft_putnbr(int nbr)
{
	int		tmp;
	int		chiffre;
	int		size;
	//A COMPLETER ATOI;
}

void	ft_putresult(char *colle, int x, int y)
{
	ft_putstr(colle);
	ft_putstr(" [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putchar(']');
}
