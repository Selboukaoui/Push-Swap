/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbouka <selbouka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 08:14:54 by selbouka          #+#    #+#             */
/*   Updated: 2025/02/07 15:20:51 by selbouka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

t_stack	*befor_last(t_stack *lst)
{
	if (!lst)
		return (NULL);
	while (lst)
	{
		if (lst->next->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (NULL);
}

void	reverse(t_stack **ab)
{
	t_stack	*tmp;
	t_stack	*last;
	t_stack	*befor_lst;

	if (!(*ab) || !ft_lstlast(*ab))
		return ;
	last = ft_lstlast(*ab);
	befor_lst = befor_last(*ab);
	tmp = (*ab);
	(*ab) = last;
	(*ab)->next = tmp;
	befor_lst->next = NULL;
}

void	rra(t_stack **a)
{
	reverse(a);
}

void	rrb(t_stack **b)
{
	reverse(b);
}

void	rrr(t_stack **a, t_stack **b)
{
	reverse(a);
	reverse(b);
}
