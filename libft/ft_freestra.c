/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freestra.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riramli <riramli@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 00:00:00 by riramli           #+#    #+#             */
/*   Updated: 2022/03/03 00:00:00 by riramli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mylibft.h"

/*
Frees a string array
*/
void	ft_freestra(char **stra)
{
	int	i;

	i = -1;
	while (i++, stra[i])
		free(stra[i]);
	free(stra);
}
