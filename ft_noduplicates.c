/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_noduplicates.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riramli <riramli@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 00:00:00 by riramli           #+#    #+#             */
/*   Updated: 2022/03/03 00:00:00 by riramli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

//1 for no duplicate integers, 0 for duplicates
int	ft_noduplicates(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (argc == 2)
		return (1);
	while (i++, i < argc)
	{
		while (j++, j < argc)
			if ((i != j) && (ft_atoi(argv[i]) == ft_atoi(argv[j])))
				return (0);
		j = 0;
	}
	return (1);
}
//test with gcc ft_noduplicates.c libft/libft.a
/*
int	main(int argc, char **argv)
{
	if (argc < 2)
		ft_printf("ERROR\n");
	else
	{
		if (ft_noduplicates(argc, argv) == 1)
			ft_printf("No duplicates\n");
		else
			ft_printf("Duplicate detected\n");
	}
}
*/
