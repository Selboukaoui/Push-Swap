/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbouka <selbouka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 15:44:31 by selbouka          #+#    #+#             */
/*   Updated: 2025/02/16 18:46:12 by selbouka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	best_move(t_stack *lst, int idx)
{
	int		i;
	int		size;
	t_stack	*tmp;

	tmp = lst;
	size = ft_lstsize(tmp) / 2;
	i = 0;
	while (i < size && tmp)
	{
		if (tmp->index == idx)
			return (1);
		i++;
		tmp = tmp->next;
	}
	return (0);
}

t_stack	*add_args_to_a(char **lst, t_stack **stack_a)
{
	int		j;
	t_stack	*tmp;

	j = 0;
	while (lst[j])
	{
		tmp = ft_lstnew(ft_atoi(lst[j]));
		tmp->index = 0;
		ft_lstadd_back(stack_a, tmp);
		j++;
	}
	return ((*stack_a));
}

void	get_index(t_stack **list)
{
	t_stack	*tmp;
	t_stack	*tmp2;
	int		i;

	tmp = *list;
	i = 0;
	while (tmp)
	{
		tmp2 = *list;
		i = 0;
		while (tmp2)
		{
			if (tmp->content > tmp2->content)
				i++;
			tmp2 = tmp2->next;
		}
		tmp->index = i;
		tmp = tmp->next;
	}
}

int	max_index(t_stack *stack_a)
{
	int		i;
	t_stack	*tmp;

	i = 0;
	tmp = stack_a;
	while (tmp)
	{
		if (tmp->index > i)
			i = tmp->index;
		tmp = tmp->next;
	}
	return (i);
}
