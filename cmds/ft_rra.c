/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riramli <riramli@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 00:00:00 by riramli           #+#    #+#             */
/*   Updated: 2022/03/03 00:00:00 by riramli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

/*
Shift down all elements of stack a by 1.
The last element becomes the first one.
*/
char	*ft_rra(t_psvars *v, int debug)
{
	int	i;

	i = v->sizea - 1;
	if (v->sizea > 1)
	{
		v->i0 = v->a[i];
		while (i > 0)
		{
			v->a[i] = v->a[i - 1];
			i--;
		}
		v->a[i] = v->i0;
	}
	v->cmd = "rra\n";
	v->count = v->count + 1;
	if (debug)
		ft_presult(*v);
	return (v->cmd);
}
