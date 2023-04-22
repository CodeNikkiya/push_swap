/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   begin_to_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npavelic <npavelic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 09:09:57 by npavelic          #+#    #+#             */
/*   Updated: 2023/04/22 20:46:18 by npavelic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

static void	get_all_but_three_outta_a(t_stack **a_stack, t_stack **b_stack)
{
	while (count_stack(*a_stack) > 3)
	{
		push_to_b(a_stack, b_stack);
	}
	solver_of_threes(a_stack);
}

void	assign_targets_b(int total, t_stack *a_stack, t_stack *b_stack)
{
	t_stack	*temp;

	while (b_stack)
	{
		temp = a_stack;
		while (temp)
		{
			if (((b_stack->index == total) && (temp->current_pos == 1))
				|| (b_stack->index == temp->index - 1))
				b_stack->target_pos = temp->current_pos;
			temp = temp->next;
		}
		b_stack = b_stack->next;
	}
}

void	values_for_nodes(int total, t_stack **a_stack, t_stack **b_stack)
{
	curren_positions (*a_stack);
	curren_positions (*b_stack);
	assign_targets_b(total, *a_stack, *b_stack);
}

int	pick_to_move(t_stack *b_stack)
{
	t_stack	*temp;
	int		smol;

	temp = b_stack;
	while (temp)
	{
		if (temp->cost_b != 0)
			smol = temp->cost_b;
		temp = temp->next;
	}
	temp = b_stack;
	while (temp)
	{
		if ((temp->cost_b != 0) && (temp->cost_b < smol))
			smol = temp->cost_b;
		temp = temp->next;
	}
	temp = b_stack;
	while (1)
	{
		if (temp->cost_b == smol)
			return (temp->content);
		else
			temp = temp->next;
	}
}

void	do_sorting(int total, t_stack **a_stack, t_stack **b_stack)
{
	if (total < 4)
	{
		ein_zwei_drei (total, a_stack);
		return ;
	}
	get_all_but_three_outta_a (a_stack, b_stack);
	values_for_nodes (total, a_stack, b_stack);
	calculate_moves(*a_stack, *b_stack);
	printf("\n%i\n", pick_to_move(*b_stack));
}
