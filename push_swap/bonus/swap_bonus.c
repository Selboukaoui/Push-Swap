/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbouka <selbouka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 07:46:00 by selbouka          #+#    #+#             */
/*   Updated: 2025/02/07 15:21:03 by selbouka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	swap(t_stack **ab)
{
	int	tmp;

	if (!(*ab) || !(*ab)->next)
		return ;
	tmp = (*ab)->content;
	(*ab)->content = (*ab)->next->content;
	(*ab)->next->content = tmp;
	tmp = (*ab)->index;
	(*ab)->index = (*ab)->next->index;
	(*ab)->next->index = tmp;
}

void	sa(t_stack **a)
{
	swap(a);
}

void	sb(t_stack **b)
{
	swap(b);
}

void	ss(t_stack **a, t_stack **b)
{
	swap(a);
	swap(b);
}
