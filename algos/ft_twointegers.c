/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_twointegers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riramli <riramli@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 00:00:00 by riramli           #+#    #+#             */
/*   Updated: 2022/03/03 00:00:00 by riramli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

/*
for a 2 integer sort, either the array is already sorted (0 1) or not (1 0)
we already ruled out sorted ones with ft_alreadysorted, so we only have to
deal with (1 0) by performing the sa command.
*/
void	ft_twointegers(t_psvars v, int showresult)
{
	ft_printf("%s", ft_sa(&v, 0));
	if (showresult == 1)
		ft_showsortresult(v);
}
