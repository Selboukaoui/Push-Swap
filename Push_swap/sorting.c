/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbouka <selbouka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 20:32:16 by selbouka          #+#    #+#             */
/*   Updated: 2025/02/07 12:42:23 by selbouka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	check_opposite(t_stack *a)
{
	int	s_size;
	int	count;
	int	diff;

	diff = 0;
	count = 0;
	s_size = ft_lstsize(a);
	while (a && a->next)
	{
		diff = a->index - a->next->index;
		if (diff == 2 || diff == 3 || diff == 4)
			count++;
		a = a->next;
	}
	if (count * 10 >= s_size * 6)
		return (true);
	return (false);
}

void	s_ff(t_stack **stack_a, t_stack **stack_b)
{
	int	i;

	i = ft_lstsize(*stack_a);
	while (i > 0 && ft_lstsize(*stack_b) < 2)
	{
		if ((*stack_a)->index <= 1)
		{
			pb(stack_a, stack_b);
		}
		else
			ra(stack_a);
		i--;
	}
	if (ft_lstsize(*stack_a) == 3)
		s_three(stack_a);
	else if ((*stack_a)->index > (*stack_a)->next->index)
		sa(stack_a);
	if ((*stack_b)->index < (*stack_b)->next->index)
		sb(stack_b);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
}

void	big_sort(t_stack	**stack_a, t_stack **stack_b, int range)
{
	int	i;

	i = 0;
	while (ft_lstsize(*stack_a) > 0)
	{
		if ((*stack_a)->index <= i)
		{
			pb(stack_a, stack_b);
			++i;
		}
		else if ((*stack_a)->index <= i + range)
		{
			pb(stack_a, stack_b);
			rb(stack_b);
			++i;
		}
		else if (check_opposite(*stack_a))
			rra(stack_a);
		else
			ra(stack_a);
	}
}

void	final_sort(t_stack **stack_a, t_stack **stack_b)
{
	int	idx;

	idx = max_index(*stack_b);
	while (ft_lstsize(*stack_b) > 0)
	{
		if ((*stack_b)->index == idx)
		{
			pa(stack_a, stack_b);
			idx--;
		}
		else if ((*stack_b)->next->index == idx)
		{
			sb(stack_b);
			pa(stack_a, stack_b);
			idx--;
		}
		else
		{
			if (!best_move(*stack_b, idx))
				rrb(stack_b);
			else
				rb(stack_b);
		}
	}
}

void	sorting(t_stack **stack_a, t_stack **stack_b)
{
	if (ft_lstsize(*stack_a) == 2)
		sa(stack_a);
	else if (ft_lstsize(*stack_a) == 3)
		s_three(stack_a);
	else if (ft_lstsize(*stack_a) <= 5)
		s_ff(stack_a, stack_b);
	else
	{
		if (ft_lstsize(*stack_a) <= 100)
			big_sort(stack_a, stack_b, 5);	// 10 - 20 best one 15 or 18
		else
			big_sort(stack_a, stack_b, 37); 	// 30 - 38 best one 35
		final_sort(stack_a, stack_b);
	}
}

