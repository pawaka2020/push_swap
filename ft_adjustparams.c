/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_adjust.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riramli <riramli@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 00:00:00 by riramli           #+#    #+#             */
/*   Updated: 2022/03/03 00:00:00 by riramli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

/*
push_swap requires that we use quotes as parameters as well, ie "1 3 4"
argv and argc cannot be used because "1 3 4" will be taken as just one parameter.
Thus ft_adjust seeks to return the true argc and argv with usage of quotes taken
into account
*/
char	*ft_merge(int argc, char **argv)
{
	char	*c;
	char	*c2;
	int		i;

	c = 0;
	i = -1;
	while (i++, i < argc)
	{
		c2 = c;
		c = ft_strjoin(c2, argv[i]);
		free(c2);
		c2 = c;
		c = ft_strjoin(c2, " ");
		free(c2);
	}
	return (c);
}

void	ft_adjustparams(int *argc, char ***argv)
{
	int		i;
	char	*c;
	char	**argv2;

	i = 0;
	c = ft_merge(*argc, *argv);
	argv2 = ft_split(c, ' ');
	while (argv2[i] != 0)
		i++;
	*argc = i;
	*argv = argv2;
	free(c);
}
/*
int	main(int argc, char **argv)
{
	ft_adjustparams(&argc, &argv);
		int	i = 0;
	while (argv[i] != 0)
	{
		ft_printf("%s\n", argv[i]);
		i++;
	}
	ft_printf("number of args = %d\n", i);
	ft_freestra(argv);
}
*/
