/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_withinlimits.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riramli <riramli@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 00:00:00 by riramli           #+#    #+#             */
/*   Updated: 2022/03/03 00:00:00 by riramli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

/*
Checks integer strings if they are within INT_MAX and INT_MIN
1 for valid, 0 for invalid, 
too big: -1 but ft_strlen > 2
too small: 0 bt ft_strlen > 1
*/
int	ft_toobig(char *v)
{
	if (ft_atoi(v) == -1 && ft_strlen(v) > 2)
		return (1);
	return (0);
}

int	ft_toosmall(char *v)
{
	if (ft_atoi(v) == 0 && ft_strlen(v) > 1)
		return (1);
	return (0);
}

int	ft_withinlimits(int argc, char **argv)
{
	int	i;

	i = 0;
	while (i++, i < argc)
		if (ft_toosmall(argv[i]) || ft_toobig(argv[i]))
			return (0);
	return (1);
}
//test with gcc ft_withinlimits.c libft/libft.a
/*
int	main(int argc, char **argv)
{
	if (argc < 2)
		ft_printf("ERROR\n");
	else
	{
		if (ft_withinlimits(argc, argv) == 1)
			ft_printf("Valid\n");
		else
			ft_printf("Invalid\n");
	}
}
*/
