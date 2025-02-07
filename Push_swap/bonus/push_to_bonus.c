/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbouka <selbouka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 20:32:09 by selbouka          #+#    #+#             */
/*   Updated: 2025/02/07 13:31:58 by selbouka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	push(t_stack **to, t_stack **from)
{
	t_stack	*tmp;

	if (!(*from) || !from)
		return ;
	tmp = *from;
	(*from) = (*from)->next;
	tmp->next = NULL;
	ft_lstadd_front(to, tmp);
}

void	pa(t_stack **a, t_stack **b)
{
	push(a, b);
}

void	pb(t_stack **a, t_stack **b)
{
	push(b, a);
}
