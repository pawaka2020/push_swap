/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insertion.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riramli <riramli@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 00:00:00 by riramli           #+#    #+#             */
/*   Updated: 2022/03/03 00:00:00 by riramli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

/*
The most basic sorting algo
this is only for stack size 6 and below 
We already know the lowest value, it's 0
since we already converted all integers 
into ranks.
OPERATION:
Find the lowest value. Since the integers have already been converted
to ranks, all we need to do is find 0
Move 0 to Stack B
Rotate Stack A until 1 is found
Move 1 to Stack B
Repeat until Stack A is empty
Move all integers back to Stack A for the result
*/
void	ft_insertion(t_psvars v, int showresult)
{
	int	i;
	int	j;

	i = -1;
	j = 0;
	while (j < v.size)
	{
		while (i++, i < v.sizea)
		{
			if (v.a[0] == j)
			{
				ft_printf("%s", ft_pb(&v, 0));
				break ;
			}
			else
				ft_printf("%s", ft_ra(&v, 0));
		}
		i = -1;
		j++;
	}
	while (v.sizeb > 0)
		ft_printf("%s", ft_pa(&v, 0));
	if (showresult == 1)
		ft_showsortresult(v);
}
