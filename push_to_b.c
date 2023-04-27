/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npavelic <npavelic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 20:44:18 by npavelic          #+#    #+#             */
/*   Updated: 2023/04/27 19:31:10 by npavelic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

void	push_but_three_outta_a(t_stack **a_stack, t_stack **b_stack, int t)
{
	int	i;

	i = 9;
	if (t > 5)
	{
		while (i)
		{
			while ((count_stack(*a_stack) > ((i * t / 10) + 1))
				&& (count_stack(*a_stack) > 3))
			{
				if ((*a_stack)->index <= (((10 - i) * t) / (10)))
					push_to_b(a_stack, b_stack);
				else
					rotate_a(a_stack);
			}
			i--;
		}
	}
	while (count_stack(*a_stack) > 3)
		push_to_b(a_stack, b_stack);
	solver_of_threes(a_stack);
}

// void	push_but_three_outta_a(t_stack **a_stack, t_stack **b_stack, int t)
// {
// 	while ((count_stack(*a_stack) > ((9* t / 10) + 1))
//		&& (count_stack(*a_stack) > 3))
// 	{
// 		if ((*a_stack)->index <= (t / 10))
// 			push_to_b(a_stack, b_stack);
// 		else
// 			rotate_a(a_stack);
// 	}
// 	while ((count_stack(*a_stack) > ((8* t / 10) + 1))
//		&& (count_stack(*a_stack) > 3))
// 	{
// 		if ((*a_stack)->index <= (2* t / 10))
// 			push_to_b(a_stack, b_stack);
// 		else
// 			rotate_a(a_stack);
// 	}
// 	while ((count_stack(*a_stack) > ((7* t / 10) + 1))
//		&& (count_stack(*a_stack) > 3))
// 	{
// 		if ((*a_stack)->index <= (3 *t / 10))
// 			push_to_b(a_stack, b_stack);
// 		else
// 			rotate_a(a_stack);
// 	}
// 	while ((count_stack(*a_stack) > ((6* t / 10) + 1))
//		&& (count_stack(*a_stack) > 3))
// 	{
// 		if ((*a_stack)->index <= (4 *t / 10))
// 			push_to_b(a_stack, b_stack);
// 		else
// 			rotate_a(a_stack);
// 	}
// 	while ((count_stack(*a_stack) > ((t / 2) + 1)) 
//		&& (count_stack(*a_stack) > 3))
// 	{
// 		if ((*a_stack)->index <= (t / 2))
// 			push_to_b(a_stack, b_stack);
// 		else
// 			rotate_a(a_stack);
// 	}
// 	while ((count_stack(*a_stack) > ((4* t / 10) + 1)) 
//		&& (count_stack(*a_stack) > 3))
// 	{
// 		if ((*a_stack)->index <= (6 *t / 10))
// 			push_to_b(a_stack, b_stack);
// 		else
// 			rotate_a(a_stack);
// 	}
// 	while ((count_stack(*a_stack) > ((3* t / 10) + 1)) 
//		&& (count_stack(*a_stack) > 3))
// 	{
// 		if ((*a_stack)->index <= (7 *t / 10))
// 			push_to_b(a_stack, b_stack);
// 		else
// 			rotate_a(a_stack);
// 	}
// 	while ((count_stack(*a_stack) > ((2* t / 10) + 1))
//		&& (count_stack(*a_stack) > 3))
// 	{
// 		if ((*a_stack)->index <= (8 *t / 10))
// 			push_to_b(a_stack, b_stack);
// 		else
// 			rotate_a(a_stack);
// 	}
// 	while ((count_stack(*a_stack) > ((t / 10) + 1)) 
//		&& (count_stack(*a_stack) > 3))
// 	{
// 		if ((*a_stack)->index <= (9 *t / 10))
// 			push_to_b(a_stack, b_stack);
// 		else
// 			rotate_a(a_stack);
// 	}
// 	while (count_stack(*a_stack) > 3)
// 		push_to_b(a_stack, b_stack);
// 	solver_of_threes(a_stack);
// }
