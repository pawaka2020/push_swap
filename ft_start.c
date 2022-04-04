/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_presult.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riramli <riramli@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 00:00:00 by riramli           #+#    #+#             */
/*   Updated: 2022/03/03 00:00:00 by riramli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

/*
Optional, but turned off by default for moulinette submission
Displays more detailed results for debugging purposes
*/
void	ft_presult(t_psvars v)
{
	int	i;

	i = -1;
	ft_printf("a: ");
	while (i++, i < v.size)
		if (v.a[i] != -1)
			ft_printf("%d ", v.a[i]);
	ft_printf("\nb: ");
	i = -1;
	while (i++, i < v.size)
		if (v.b[i] != -1)
			ft_printf("%d ", v.b[i]);
	ft_printf("\n");
}

/*
Fills in the data structure for using
*/
void	ft_buildst(t_psvars *v, int argc, char **argv, int test)
{
	int	i;

	i = -1;
	v->size = argc - 1;
	v->sizea = v->size;
	v->sizeb = 0;
	v->a = ft_convert(argc, argv, 0);
	v->b = (int *)malloc((v->size) * sizeof(int));
	while (i++, i < v->size)
		v->b[i] = -1;
	v->count = 0;
	if (test)
		ft_presult(*v);
}

void	ft_sort(t_psvars v, int showresult)
{
	if (ft_alreadysorted(v) == 0)
	{
		if (v.size == 2)
			ft_twointegers(v, showresult);
		else if (v.size == 3)
			ft_threeintegers(v, showresult);
		else if (v.size == 4 || v.size == 5)
			ft_fourintegers(v, showresult);
		else
			ft_binaryradix(v, showresult);
	}
}

void	ft_start(int argc, char **argv, int showresult)
{
	t_psvars	v;

	ft_buildst(&v, argc, argv, 0);
	ft_sort(v, showresult);
	free(v.a);
	free(v.b);
}
