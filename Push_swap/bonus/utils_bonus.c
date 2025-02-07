/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbouka <selbouka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 15:44:31 by selbouka          #+#    #+#             */
/*   Updated: 2025/02/07 13:36:12 by selbouka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

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
	return ((*stack_a));
}
