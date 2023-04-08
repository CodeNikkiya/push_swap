/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npavelic <npavelic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 22:56:34 by npavelic          #+#    #+#             */
/*   Updated: 2023/04/08 12:24:22 by npavelic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

static void	push_it(t_stack **giver, t_stack **receiver)
{
	t_stack	*giver_top;

	if (!(*giver))
		return ;
	giver_top = *giver;
	*giver = giver_top->next;
	giver_top->next = *receiver;
	*receiver = giver_top;
}

void	push_to_a(t_stack **b_stack, t_stack **a_stack)
{
	push_it(b_stack, a_stack);
	write (1, "pa\n", 3);
}

void	push_to_b(t_stack **a_stack, t_stack **b_stack)
{
	push_it(a_stack, b_stack);
	write (1, "pb\n", 3);
}
