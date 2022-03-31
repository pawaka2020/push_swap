/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riramli <riramli@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 00:00:00 by riramli           #+#    #+#             */
/*   Updated: 2022/03/03 00:00:00 by riramli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

/*
Take the first element at the top of a and put it at the top of b.
Do nothing if a is empty
*/
char	*ft_pb(t_psvars *v, int debug)
{
	if (v->sizea == 0)
		return ("pb\n");
	v->sizeb = v->sizeb + 1;
	ft_rrb(v, 0);
	v->i0 = v->a[0];
	v->a[0] = -1;
	v->b[0] = v->i0;
	ft_ra(v, 0);
	v->sizea = v->sizea - 1;
	v->cmd = "pb\n";
	v->count = v->count - 1;
	if (debug)
		ft_presult(*v);
	return (v->cmd);
}
