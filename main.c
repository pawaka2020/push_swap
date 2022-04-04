/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riramli <riramli@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 00:00:00 by riramli           #+#    #+#             */
/*   Updated: 2022/03/03 00:00:00 by riramli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

/*
Makes sure only integers, not float, not spaces, not letters, etc
*/
int	ft_intonly(int c, char **v)
{
	int	i;
	int	j;

	i = -1;
	j = 0;
	if (c < 2)
		return (0);
	while (j++, j < c)
	{
		while (i++, v[j][i] != 0)
		{
			if (v[j][i] != '-')
				if (v[j][i] < '0' || v[j][i] > '9')
					return (0);
			if (v[j][i] == '-' && i != 0)
				return (0);
		}
		i = -1;
	}
	return (1);
}

int	ft_valid(int argc, char **argv)
{
	int	a;
	int	b;
	int	c;

	a = ft_intonly(argc, argv);
	b = ft_withinlimits(argc, argv);
	c = ft_noduplicates(argc, argv);
	if (argc == 1)
		exit (0);
	if (a && b && c)
		return (1);
	return (0);
}

//switch the last param of startfdf to 0
//to turn off the extra messages
//1 will NOT work with checker
//checks that params are valid before starting,
//if not print error and exit immediately
int	main(int argc, char **argv)
{
	ft_adjustparams(&argc, &argv);
	if (!ft_valid(argc, argv))
		ft_printerror("Error\n");
	ft_start(argc, argv, 0);
}
