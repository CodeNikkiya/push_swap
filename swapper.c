/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swapper.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npavelic <npavelic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 11:08:07 by npavelic          #+#    #+#             */
/*   Updated: 2023/04/08 11:29:56 by npavelic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

static void	swap_top(t_stack *stack)
{
	int		i;
	t_stack	*l_checkk;
	t_stack	*second;

	i = 0;
	l_checkk = stack;
	while (l_checkk)
	{
		i++;
		l_checkk = l_checkk->next;
	}
	if (i < 2)
		return ;
	second = stack->next;
	i = second->content;
	second->content = stack->content;
	stack->content = i;
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
