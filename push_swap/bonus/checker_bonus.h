/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbouka <selbouka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 18:56:33 by selbouka          #+#    #+#             */
/*   Updated: 2025/02/17 09:41:37 by selbouka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H

# include <limits.h>
# include <unistd.h>
# include <stdbool.h>
# include "../libft/libft.h"
# include "../libft/get_next_line.h"

typedef struct save
{
	char			*mv;
	struct save		*next;
}	t_move;

bool	is_sorted(t_stack *lst);
void	duplicate_arg_check(char **lst);
void	empty_arg_check(char **av);
void	only_digit(char **lst);
char	**check_av(int ac, char **av);

void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);

void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);

void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);

void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);

void	sorting(t_stack **stack_a, t_stack **stack_b);
void	s_three(t_stack **stack_a);

void	err(int i);
t_stack	*add_args_to_a(char **lst, t_stack **stack_a);

void	take_moves(t_stack **stack_a, t_stack **stack_b, t_move *mv);
void	do_move(t_stack **a, t_stack **b, char *move);
void	check_move(char *move);
int		ft_strcmp(char *s1, char *s2);

void	save_op(t_move **move, char *op);

#endif
