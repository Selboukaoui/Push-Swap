/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbouka <selbouka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:22:51 by selbouka          #+#    #+#             */
/*   Updated: 2025/02/02 17:46:43 by selbouka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*tmp;

	if (!new || !lst)
		return ;
	else if (!*lst)
	{
		*lst = new;
		return ;
	}
	tmp = ft_lstlast(*lst);
	tmp->next = new;
}
