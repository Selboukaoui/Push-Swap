/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbouka <selbouka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 17:35:54 by selbouka          #+#    #+#             */
/*   Updated: 2025/02/17 09:14:27 by selbouka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../push_swap.h"

t_stack	*ft_lstnew(int content)
{
	t_stack	*p;

	p = ft_malloc(sizeof(t_stack), 1);
	if (!p)
		err(25);
	p->content = content;
	p->next = NULL;
	return (p);
}
