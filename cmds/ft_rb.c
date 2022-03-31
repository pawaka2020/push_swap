/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riramli <riramli@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 00:00:00 by riramli           #+#    #+#             */
/*   Updated: 2022/03/03 00:00:00 by riramli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

/*
Shift up all elements of stack b by 1.
The first element becomes the last one.
*/
char	*ft_rb(t_psvars *v, int debug)
{
	int	i;

	i = 0;
	if (v->sizeb > 1)
	{
		while (i < v->sizeb - 1)
		{
			v->i0 = v->b[i];
			v->i1 = v->b[i + 1];
			v->b[i] = v->i1;
			v->b[i + 1] = v->i0;
			i++;
		}
	}
	v->cmd = "rb\n";
	v->count = v->count + 1;
	if (debug)
		ft_presult(*v);
	return (v->cmd);
}
