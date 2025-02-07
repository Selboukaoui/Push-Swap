/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbouka <selbouka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 01:06:16 by selbouka          #+#    #+#             */
/*   Updated: 2025/02/07 12:35:59 by selbouka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	err(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	char	*move;

	stack_a = NULL;
	stack_b = NULL;
	if (ac <= 1)
		return (0);
	av = check_av(ac, av);
	stack_a = add_args_to_a(av, &stack_a);
	while (ac > 1)
	{
		move = get_next_line(0);
		if (move == NULL)
		{
			break ;
		}
		do_move(&stack_a, &stack_b, move);
	}
	if (is_sorted(stack_a) && ft_lstsize(stack_b) == 0)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}
