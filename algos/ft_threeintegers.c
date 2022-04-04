/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_threeintegers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riramli <riramli@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 00:00:00 by riramli           #+#    #+#             */
/*   Updated: 2022/03/03 00:00:00 by riramli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

/*
(0 1 2) is already counted out so we have 
(0 2 1) (1 0 2) (1 2 0) (2 0 1) (2 1 0)
must have less or equal to 3 moves
0 2 1 -> 2 0 1 -> 0 1 2 sa + ra -2
1 0 2 -> 0 1 2 sa 1
1 2 0 -> 2 0 1 -> 0 1 2 ra + ra -1
2 0 1 -> 0 1 2 ra 2
2 1 0 -> 1 2 0 -> 0 1 2 sa + rra 1
*/
void	ft_threeintegers(t_psvars v, int showresult)
{
	if (v.a[0] == 0)
	{
		ft_printf("%s", ft_sa(&v, 0));
		ft_printf("%s", ft_ra(&v, 0));
	}
	else if (v.a[0] == 1 && v.a[1] == 0)
		ft_printf("%s", ft_sa(&v, 0));
	else if (v.a[0] == 1 && v.a[1] == 2)
	{
		ft_printf("%s", ft_ra(&v, 0));
		ft_printf("%s", ft_ra(&v, 0));
	}	
	else if (v.a[0] == 2 && v.a[1] == 0)
		ft_printf("%s", ft_ra(&v, 0));
	else if (v.a[0] == 2 && v.a[1] == 1)
	{
		ft_printf("%s", ft_sa(&v, 0));
		ft_printf("%s", ft_rra(&v, 0));
	}
	if (showresult == 1)
		ft_showsortresult(v);
}
