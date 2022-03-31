/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riramli <riramli@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 00:00:00 by riramli           #+#    #+#             */
/*   Updated: 2022/03/03 00:00:00 by riramli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

//converts entered strings into numbers and consequently ranks
//ranks simplify sorting, especially for binary radix.
//ranks also enables usage of -1 for non-functional slots for each stack
int	*ft_convert(int argc, char **argv, int debug)
{
	t_convert	c;

	c.rankarray = (int *)malloc((argc - 1) * sizeof(int));
	c.j = 0;
	c.rank = 0;
	c.i = 0;
	while (c.j++, c.j < argc)
	{
		while (c.i++, c.i < argc)
		{
			if (ft_atoi(argv[c.j]) > ft_atoi(argv[c.i]))
				c.rank++;
		}
		c.rankarray[c.j - 1] = c.rank;
		c.rank = 0;
		c.i = 0;
	}
	if (debug)
		return (0);
	return (c.rankarray);
}
