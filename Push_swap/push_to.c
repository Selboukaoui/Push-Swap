/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbouka <selbouka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 20:32:09 by selbouka          #+#    #+#             */
/*   Updated: 2025/02/02 17:48:04 by selbouka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack **to, t_stack **from)
{
	t_stack	*tmp;

	if (from == NULL)
		return ;
	tmp = *from;
	(*from) = (*from)->next;
	tmp->next = NULL;
	ft_lstadd_front(to, tmp);
}

void	pa(t_stack **a, t_stack **b)
{
	write(1, "pa\n", 3);
	push(a, b);
}

void	pb(t_stack **a, t_stack **b)
{
	write(1, "pb\n", 3);
	push(b, a);
}
