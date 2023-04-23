/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   up_to_three_elements.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npavelic <npavelic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 16:49:37 by npavelic          #+#    #+#             */
/*   Updated: 2023/04/23 20:07:30 by npavelic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

static int	three_is_solved(t_stack *a_stack)
{
	if (a_stack->content < a_stack->next->content
		&& a_stack->next->content < a_stack->next->next->content)
		return (1);
	else
		return (0);
}

static void	needs_two_actions(t_stack **a_stack)
{
	if ((*a_stack)->content < (*a_stack)->next->content
		&& (*a_stack)->content < (*a_stack)->next->next->content)
	{
		rev_rotate_a(a_stack);
		swap_a(*a_stack);
		return ;
	}
	if ((*a_stack)->content > (*a_stack)->next->content
		&& (*a_stack)->content > (*a_stack)->next->next->content)
	{
		rotate_a(a_stack);
		swap_a(*a_stack);
		return ;
	}
}

void	solver_of_threes(t_stack **a_stack)
{
	if (three_is_solved (*a_stack))
		return ;
	if ((*a_stack)->content > (*a_stack)->next->content
		&& (*a_stack)->content < (*a_stack)->next->next->content)
	{
		swap_a(*a_stack);
		return ;
	}
	if ((*a_stack)->content < (*a_stack)->next->content
		&& (*a_stack)->content > (*a_stack)->next->next->content)
	{
		rev_rotate_a(a_stack);
		return ;
	}
	if ((*a_stack)->content > (*a_stack)->next->next->content
		&& (*a_stack)->next->content < (*a_stack)->next->next->content)
	{
		rotate_a(a_stack);
		return ;
	}
	needs_two_actions(a_stack);
	return ;
}

void	solve_two(t_stack **a_stack)
{
	if ((*a_stack)->content > (*a_stack)->next->content)
	{
		swap_a(*a_stack);
		return ;
	}
	return ;
}

void	ein_zwei_drei(int i, t_stack **a_stack)
{
	if (i == 1)
		return ;
	if (i == 2)
	{
		solve_two(a_stack);
		return ;
	}
	if (i == 3)
	{
		solver_of_threes(a_stack);
		return ;
	}
}
