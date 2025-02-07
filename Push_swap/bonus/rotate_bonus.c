/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbouka <selbouka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 07:56:44 by selbouka          #+#    #+#             */
/*   Updated: 2025/02/05 09:32:22 by selbouka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	rotate(t_stack **ab)
{
	t_stack	*tmp;

	if (ft_lstsize(*ab) <= 1)
		return ;
	tmp = (*ab);
	(*ab) = (*ab)->next;
	tmp->next = NULL;
	ft_lstadd_back(ab, tmp);
}

void	ra(t_stack **a)
{
	rotate(a);
}

void	rb(t_stack **b)
{
	rotate(b);
}

void	rr(t_stack **a, t_stack **b)
{
	rotate(a);
	rotate(b);
}
