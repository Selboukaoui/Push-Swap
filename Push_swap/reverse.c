/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbouka <selbouka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 08:14:54 by selbouka          #+#    #+#             */
/*   Updated: 2025/02/02 17:48:28 by selbouka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

	if (!*ab || !ft_lstlast(*ab))
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
	write (1, "rra\n", 4);
	reverse(a);
}

void	rrb(t_stack **b)
{
	write (1, "rrb\n", 4);
	reverse(b);
}

void	rrr(t_stack **a, t_stack **b)
{
	write (1, "rrr\n", 4);
	reverse(a);
	reverse(b);
}
