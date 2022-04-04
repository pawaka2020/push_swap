/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fourintegers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riramli <riramli@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 00:00:00 by riramli           #+#    #+#             */
/*   Updated: 2022/03/03 00:00:00 by riramli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

/*
This is for stack sizes 4 and 5
the same methodology is used as in threeintegers: but with extra steps:
1 - the lowest ranked integers are located and pushed to stack b
To save steps, An added algorithm is included to locate 
position of lowest ranks. If closer to
beginning, ra is used, if closer to end rra is used.
ra or rra is used to move an integer to the first position before pushing to
stabk b.
2 - then perform sorting on remaining 3 integers. Assume that the 3 integers
are the same as '0 1 2' with adjustments. For instance, if the stack size is 5,
the remaining ranked integers after step 1 will be 2, 3, 4.
3. Once integers in stack a have been sorted, push all integers from stack b
back to stack a
*/
void	ft_findandpush(t_psvars *v, int i)
{
	int	j;

	j = -1;
	while (j++, j < v->sizea)
	{
		if (v->a[0] == i)
		{
			ft_printf("%s", ft_pb(v, 0));
			break ;
		}
		else
		{
			ft_printf("%s", ft_ra(v, 0));
		}
	}
}

int	ft_findposition(t_psvars *v, int i)
{
	int	j;

	j = 0;
	while (v->a[j] != i)
		j++;
	return (j);
}

void	ft_push(t_psvars *v, int i)
{
	int	pos;

	pos = ft_findposition(v, i);
	if ((pos - 0) < (v->sizea - 1 - pos))
		while (v->a[0] != i)
			ft_printf("%s", ft_ra(v, 0));
	else
		while (v->a[0] != i)
			ft_printf("%s", ft_rra(v, 0));
	ft_printf("%s", ft_pb(v, 0));
}

void	ft_threesort(t_psvars v, int x)
{
	if (v.a[0] == (0 + x))
	{
		ft_printf("%s", ft_sa(&v, 0));
		ft_printf("%s", ft_ra(&v, 0));
	}
	else if (v.a[0] == (1 + x) && v.a[1] == (0 + x))
		ft_printf("%s", ft_sa(&v, 0));
	else if (v.a[0] == (1 + x) && v.a[1] == (2 + x))
	{
		ft_printf("%s", ft_ra(&v, 0));
		ft_printf("%s", ft_ra(&v, 0));
	}	
	else if (v.a[0] == (2 + x) && v.a[1] == (0 + x))
		ft_printf("%s", ft_ra(&v, 0));
	else if (v.a[0] == (2 + x) && v.a[1] == (1 + x))
	{
		ft_printf("%s", ft_sa(&v, 0));
		ft_printf("%s", ft_rra(&v, 0));
	}
}

void	ft_fourintegers(t_psvars v, int showresult)
{
	int	i;
	int	x;

	i = -1;
	x = v.size - 3;
	while (i++, i < x)
		ft_push(&v, i);
	ft_threesort(v, x);
	while (v.sizeb > 0)
		ft_printf("%s", ft_pa(&v, 0));
	if (showresult == 1)
		ft_showsortresult(v);
}
