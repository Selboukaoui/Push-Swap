/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbouka <selbouka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 20:32:16 by selbouka          #+#    #+#             */
/*   Updated: 2025/02/05 18:23:40 by selbouka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	ft_strcmp(char *s1, char *s2)
{
	size_t	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}

void	do_move(t_stack **a, t_stack **b, char *move)
{
	if (ft_strcmp(move, "sa\n"))
		sa(a);
	else if (ft_strcmp(move, "sb\n"))
		sb(b);
	else if (ft_strcmp(move, "ss\n"))
		ss(a, b);
	else if (ft_strcmp(move, "pa\n"))
		pa(a, b);
	else if (ft_strcmp(move, "pb\n"))
		pb(a, b);
	else if (ft_strcmp(move, "ra\n"))
		ra(a);
	else if (ft_strcmp(move, "rb\n"))
		rb(b);
	else if (ft_strcmp(move, "rr\n"))
		rr(a, b);
	else if (ft_strcmp(move, "rra\n"))
		rra(a);
	else if (ft_strcmp(move, "rrb\n"))
		rrb(b);
	else if (ft_strcmp(move, "rrr\n"))
		rrr(a, b);
	else
		err();
}
