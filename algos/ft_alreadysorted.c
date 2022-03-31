/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_alreadysorted.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riramli <riramli@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 00:00:00 by riramli           #+#    #+#             */
/*   Updated: 2022/03/03 00:00:00 by riramli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

/*
Checks if an integer stack is already sorted from smallest upward.
return 1 for yes, 0 for no
*/
int	ft_alreadysorted(t_psvars v)
{
	int	i;
	int	diff;

	i = 0;
	diff = 0;
	if (v.size == 1)
		return (1);
	while (i++, i < v.size)
	{
		diff = v.a[i] - v.a[i - 1];
		if (diff < 0)
			return (0);
	}	
	return (1);
}
