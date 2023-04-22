/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swapper.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npavelic <npavelic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 11:08:07 by npavelic          #+#    #+#             */
/*   Updated: 2023/04/22 11:48:39 by npavelic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

static void	swap_top(t_stack *stack)
{
	int		i;
	t_stack	*second;

	if (!stack->next)
		return ;
	second = stack->next;
	i = second->content;
	second->content = stack->content;
	stack->content = i;
	i = second->index;
	second->index = stack->index;
	stack->index = i;
	i = second->current_pos;
	second->current_pos = stack->current_pos;
	stack->current_pos = i;
	i = second->target_pos;
	second->target_pos = stack->target_pos;
	stack->target_pos = i;
	i = second->cost_a;
	second->cost_a = stack->cost_a;
	stack->cost_a = i;
	i = second->cost_b;
	second->cost_b = stack->cost_b;
	stack->cost_b = i;
}

void	swap_a(t_stack *stack)
{
	swap_top (stack);
	write (1, "sa\n", 3);
}

void	swap_b(t_stack *stack)
{
	swap_top (stack);
	write (1, "sb\n", 3);
}

void	swap_s(t_stack *stack_a, t_stack *stack_b)
{
	swap_top (stack_a);
	swap_top (stack_b);
	write (1, "ss\n", 3);
}
