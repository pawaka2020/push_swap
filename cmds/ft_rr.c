/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riramli <riramli@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 00:00:00 by riramli           #+#    #+#             */
/*   Updated: 2022/03/03 00:00:00 by riramli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

/*
ra and rb at the same time.
*/
char	*ft_rr(t_psvars *v, int debug)
{
	v->cmd = ft_ra(v, 0);
	v->cmd = ft_rb(v, 0);
	v->cmd = "rr\n";
	v->count = v->count - 1;
	if (debug)
		ft_presult(*v);
	return (v->cmd);
}
