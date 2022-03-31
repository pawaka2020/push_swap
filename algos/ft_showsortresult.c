/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_showsortresult.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riramli <riramli@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 00:00:00 by riramli           #+#    #+#             */
/*   Updated: 2022/03/03 00:00:00 by riramli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

int	ft_analyze(t_psvars v)
{
	if (v.size < 4 && v.count < 4)
		return (1);
	else if (v.size < 6 && v.count < 12)
		return (1);
	else if (v.size < 101 && v.count < 1501)
		return (1);
	else if (v.size < 501 && v.count < 11501)
		return (1);
	return (0);
}

void	ft_showsortresult(t_psvars v)
{
	int	i;

	i = -1;
	ft_printf("Stack size : %d\n", v.size);
	ft_printf("Total commands : %d\n", v.count);
	ft_printf("Sort result: ");
	while (i++, i < v.size)
		ft_printf("%d ", v.a[i]);
	if (ft_analyze(v) == 1)
		ft_printf("\nMy analysis: OK\n");
	else
		ft_printf("\nMy analysis: KO\n");
}
