/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npavelic <npavelic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 22:56:34 by npavelic          #+#    #+#             */
/*   Updated: 2023/04/08 14:39:09 by npavelic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

static void	regular_rotate(t_stack **stack_start)
{
	t_stack	*stack_2;
	t_stack	*stact_end;

	if (!*stack_start || !(*stack_start)->next)
		return ;
	stack_2 = (*stack_start)->next;
	stact_end = *stack_start;
	while (stact_end ->next)
		stact_end = stact_end ->next;
	stact_end->next = *stack_start;
	(*stack_start)->next = NULL;
	*stack_start = stack_2;
}

void	rotate_a(t_stack **a_stack)
{
	regular_rotate(a_stack);
	write (1, "ra\n", 3);
}

void	rotate_b(t_stack **b_stack)
{
	regular_rotate(b_stack);
	write (1, "rb\n", 3);
}

void	rotate_two(t_stack **a_stack, t_stack **b_stack)
{
	regular_rotate(a_stack);
	regular_rotate(b_stack);
	write (1, "rr\n", 3);
}
