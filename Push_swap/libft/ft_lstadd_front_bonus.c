/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbouka <selbouka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 21:12:48 by selbouka          #+#    #+#             */
/*   Updated: 2025/02/02 17:46:19 by selbouka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_stack **lst, t_stack *new)
{
	if (!new || !lst)
		return ;
	if (!*lst)
	{
		*lst = new;
	}
	else
	{
		new->next = *lst;
		*lst = new;
	}
}
