/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbouka <selbouka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 01:06:16 by selbouka          #+#    #+#             */
/*   Updated: 2025/02/08 19:27:24 by selbouka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	err(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

void	s_three(t_stack **stack_a)
{
	int	mx;

	mx = max_index(*stack_a);
	if ((*stack_a)->index == mx)
		ra(stack_a);
	else if ((*stack_a)->next->index == mx)
		rra(stack_a);
	if ((*stack_a)->content > (*stack_a)->next->content)
		sa(stack_a);
}

void	free_satck(t_stack **lst)
{
	t_stack	*tmp;

	while (*lst)
	{
		tmp = (*lst)->next;
		free(*lst);
		*lst = tmp;
	}
}

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	stack_a = NULL;
	stack_b = NULL;
	if (ac == 1)
		return (0);
	av = check_av(ac, av);
	if (is_sorted(av))
		return (0);
	stack_a = add_args_to_a(av, &stack_a);
	get_index(&stack_a);
	sorting(&stack_a, &stack_b);
	free_(av);
	free_satck(&stack_a);
	return (0);
}
