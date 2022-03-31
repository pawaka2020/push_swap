/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riramli <riramli@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 00:00:00 by riramli           #+#    #+#             */
/*   Updated: 2022/03/03 00:00:00 by riramli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

/*
Shift up all elements of stack a by 1.
The first element becomes the last one.
*/
char	*ft_ra(t_psvars *v, int debug)
{
	int	i;

	i = 0;
	if (v->sizea > 1)
	{
		while (i < v->sizea - 1)
		{
			v->i0 = v->a[i];
			v->i1 = v->a[i + 1];
			v->a[i] = v->i1;
			v->a[i + 1] = v->i0;
			i++;
		}
	}
	v->cmd = "ra\n";
	v->count = v->count + 1;
	if (debug)
		ft_presult(*v);
	return (v->cmd);
}
