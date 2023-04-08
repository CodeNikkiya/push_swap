/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rot.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npavelic <npavelic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 22:56:34 by npavelic          #+#    #+#             */
/*   Updated: 2023/04/08 15:08:46 by npavelic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

static void	rev_rot(t_stack **stack_start)
{
	t_stack	*stack_2;
	t_stack	*stact_end;

	if (!*stack_start || !(*stack_start)->next)
		return ;
	stact_end = *stack_start;
	while (stact_end ->next)
		stact_end = stact_end ->next;
	stack_2 = *stack_start;
	while (stack_2 ->next != stact_end)
		stack_2 = stack_2 ->next;
	stact_end->next = *stack_start;
	stack_2->next = NULL;
	*stack_start = stact_end;
}

void	rev_rotate_a(t_stack **a_stack)
{
	rev_rot(a_stack);
	write (1, "rra\n", 4);
}

void	rev_rotate_b(t_stack **b_stack)
{
	rev_rot(b_stack);
	write (1, "rrb\n", 4);
}

void	rev_rot_two(t_stack **a_stack, t_stack **b_stack)
{
	rev_rot(a_stack);
	rev_rot(b_stack);
	write (1, "rrr\n", 4);
}
