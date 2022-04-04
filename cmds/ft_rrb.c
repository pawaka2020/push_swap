/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riramli <riramli@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 00:00:00 by riramli           #+#    #+#             */
/*   Updated: 2022/03/03 00:00:00 by riramli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

/*
Shift down all elements of stack b by 1.
The last element becomes the first one.
*/
char	*ft_rrb(t_psvars *v, int debug)
{
	int	i;

	i = v->sizeb - 1;
	if (v->sizeb > 1)
	{
		v->i0 = v->b[i];
		while (i > 0)
		{
			v->b[i] = v->b[i - 1];
			i--;
		}
		v->b[i] = v->i0;
	}
	v->cmd = "rrb\n";
	v->count = v->count + 1;
	if (debug)
		ft_presult(*v);
	return (v->cmd);
}
