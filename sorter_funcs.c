/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter_funcs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npavelic <npavelic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 16:49:37 by npavelic          #+#    #+#             */
/*   Updated: 2023/04/27 15:43:03 by npavelic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

static void	ra_rb(int kont, int ziel, t_stack **a_stack, t_stack **b_stack)
{
	while (((*a_stack)->current_pos != ziel) && ((*b_stack)->content != kont))
		rotate_two(a_stack, b_stack);
	while ((*b_stack)->content != kont)
		rotate_b(b_stack);
	while ((*a_stack)->current_pos != ziel)
		rotate_a(a_stack);
	push_to_a(b_stack, a_stack);
}

static void	rra_rrb(int kont, int ziel, t_stack **a_stack, t_stack **b_stack)
{
	while (((*a_stack)->current_pos != ziel) && ((*b_stack)->content != kont))
		rev_rot_two(a_stack, b_stack);
	while ((*b_stack)->content != kont)
		rev_rotate_b(b_stack);
	while ((*a_stack)->current_pos != ziel)
		rev_rotate_a(a_stack);
	push_to_a(b_stack, a_stack);
}

static void	ra_rrb(int kont, int ziel, t_stack **a_stack, t_stack **b_stack)
{
	while ((*b_stack)->content != kont)
		rev_rotate_b(b_stack);
	while ((*a_stack)->current_pos != ziel)
		rotate_a(a_stack);
	push_to_a(b_stack, a_stack);
}

static void	rra_rb(int kont, int ziel, t_stack **a_stack, t_stack **b_stack)
{
	while ((*b_stack)->content != kont)
		rotate_b(b_stack);
	while ((*a_stack)->current_pos != ziel)
		rev_rotate_a(a_stack);
	push_to_a(b_stack, a_stack);
}

void	master_sorter(int kontent, t_stack **a_stack, t_stack **b_stack)
{
	t_stack	*temp;

	temp = *b_stack;
	while (temp->content != kontent)
		temp = temp->next;
	if (temp->cost_b == 3)
		ra_rb(kontent, temp->target_pos, a_stack, b_stack);
	if (temp->cost_b == 12)
		rra_rrb(kontent, temp->target_pos, a_stack, b_stack);
	if (temp->cost_b == 9)
		ra_rrb(kontent, temp->target_pos, a_stack, b_stack);
	if (temp->cost_b == 6)
		rra_rb(kontent, temp->target_pos, a_stack, b_stack);
}
