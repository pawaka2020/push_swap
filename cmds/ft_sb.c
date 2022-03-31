/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riramli <riramli@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 00:00:00 by riramli           #+#    #+#             */
/*   Updated: 2022/03/03 00:00:00 by riramli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

/*
Swap the first 2 elements at the top of stack b.
Do nothing if there is only one or no elements.
*/
char	*ft_sb(t_psvars *v, int debug)
{
	if (v->sizeb >= 2)
	{
		v->i0 = v->b[0];
		v->i1 = v->b[1];
		v->b[0] = v->i1;
		v->b[1] = v->i0;
	}
	v->cmd = "sa\n";
	v->count = v->count + 1;
	if (debug)
		ft_presult(*v);
	return (v->cmd);
}
