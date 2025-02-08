/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbouka <selbouka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 15:44:31 by selbouka          #+#    #+#             */
/*   Updated: 2025/02/08 19:40:37 by selbouka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	free_(char **lst)
{
	int	i;

	i = 0;
	while (lst[i])
		free(lst[i++]);
	free(lst);
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
	free_(lst);
	return ((*stack_a));
}

void	clean(t_stack *a, t_stack *b, t_move *mv)
{
	t_stack	*tmp;
	t_move	*tmp2;

	while (a)
	{
		tmp = a->next;
		free(a);
		a = tmp;
	}
	while (b)
	{
		tmp = b->next;
		free(b);
		b = tmp;
	}
	while (mv)
	{
		tmp2 = mv->next;
		free(mv->mv);
		free(mv);
		mv = tmp2;
	}
}
