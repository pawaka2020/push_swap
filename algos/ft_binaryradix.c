/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_binaryradix.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riramli <riramli@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 00:00:00 by riramli           #+#    #+#             */
/*   Updated: 2022/03/03 00:00:00 by riramli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

/*
Gets the maximum number of digits of the integers if converted to binary base
(ie 1010110001)
We already converted the integers to ranks, so all we need to do is use
the stack size (since if stack size is 5, the highest rank is 4)
If highest rank is 4, binary is 100 thus expected return value is 3.
We can simply do this by using bitwise operator >> 'removing' right-most digits
if highest rank is 4 we are expected to only be able to use >>1 3 times
*/
int	ft_getdigits(int sizea)
{
	int	digits;
	int	a;

	digits = 0;
	a = sizea;
	while (a != 0)
	{
		a = a >> 1;
		digits++;
	}
	return (digits);
}

/*
This is a modified version of radix sort, but using a binary base instead of
the usual decimal base (because we have 2 stacks to work with as opposed to
10).
Radix sort cannot work with negative integers, but converting integers to
ranks alleviates this problem.
The use of bitwise operators & and << simplifies the operation here as well.
STEPS:
1. Inspect the rightmost digit of each rank's binary form.
(Compare using & 1)
2. If digit is 0, move the rank to stack b, else rotate stack a.
3. Repeat until all ranks in stack a have been inspected.
4. Move all ranks from stack b back to stack a.
5. Repeat for the next digit to the left of each rank
(Compare using & 1<<1. <<1 adds 0 to the right of 1's decimal form.)
6. Repeat 1-5 until maximm digit size has been reached for all ranks.
*/
void	ft_binaryradix(t_psvars v, int showresult)
{
	int	x;
	int	i;
	int	digits;

	x = 1;
	digits = ft_getdigits(v.sizea);
	i = -1;
	while (digits > 0)
	{
		while (i++, i < v.size)
		{
			if ((v.a[0] & x) == 0)
				ft_printf("%s", ft_pb(&v, 0));
			else
				ft_printf("%s", ft_ra(&v, 0));
		}
		while (v.sizeb > 0)
			ft_printf("%s", ft_pa(&v, 0));
		i = -1;
		x = x << 1;
		digits--;
	}
	if (showresult == 1)
		ft_showsortresult(v);
}
