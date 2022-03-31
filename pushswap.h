/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riramli <riramli@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 00:00:00 by riramli           #+#    #+#             */
/*   Updated: 2022/03/03 00:00:00 by riramli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include "libft/mylibft.h"

/*
push_swap data structure
stacks are represented by integer arrays
I can also use doubly linked lists, but it seems overkill and I prefer to KISS
*/
typedef struct s_psvars
{
	int		*a;
	int		*b;
	int		i0;
	int		i1;
	int		size;
	int		sizea;
	int		sizeb;
	int		count;
	char	*cmd;
}t_psvars;
/*
I only included this for ft_convert.c to save space and pass norminette
check
*/
typedef struct s_convert
{
	int	*rankarray;
	int	j;
	int	rank;
	int	i;
}t_convert;
//core functions
void	ft_startfdf(int argc, char **argv, int showresult);
void	ft_perror(char *str);
void	ft_presult(t_psvars v);
int		*ft_convert(int argc, char **argv, int debug);
int		ft_alreadysorted(t_psvars v);
int		ft_withinlimits(int argc, char **argv);
int		ft_noduplicates(int argc, char **argv);
//algos
void	ft_insertion(t_psvars v, int showresult);
void	ft_binaryradix(t_psvars v, int showresult);
void	ft_showsortresult(t_psvars v);
//commands
char	*ft_sa(t_psvars *v, int debug);
char	*ft_sb(t_psvars *v, int debug);
char	*ft_ss(t_psvars *v, int debug);
char	*ft_pa(t_psvars *v, int debug);
char	*ft_pb(t_psvars *v, int debug);
char	*ft_ra(t_psvars *v, int debug);
char	*ft_rra(t_psvars *v, int debug);
char	*ft_rb(t_psvars *v, int debug);
char	*ft_rrb(t_psvars *v, int debug);
char	*ft_rr(t_psvars *v, int debug);
char	*ft_rrr(t_psvars *v, int debug);

#endif
