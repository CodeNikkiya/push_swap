/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_calculators.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npavelic <npavelic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 09:09:57 by npavelic          #+#    #+#             */
/*   Updated: 2023/04/22 20:06:56 by npavelic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"


// ra = 1, rb = 2, rra = 4, rrb = 8  
// ra + rb = 3, ra + rrb = 9, rra + rb = 6, rra + rrb = 12
// 


static int	same_moves(int a_moves, int b_moves)
{
	if (a_moves > b_moves)
		return (a_moves);
	return (b_moves);
}

static void	moves_to_node(t_stack *temp, int *possible_combs)
{
	int	i;
	int	the_r_binar[4];
	int	smol;
	int	pos_in_ar;

	i = 3;
	the_r_binar[0] = 3;
	the_r_binar[1] = 9;
	the_r_binar[2] = 12;
	the_r_binar[3] = 6;
	smol = possible_combs[3];
	pos_in_ar = 3;
	while (--i >= 0)
	{
		if (possible_combs[i] < smol)
		{
			smol = possible_combs[i];
			pos_in_ar = i;
		}
	}
	temp->cost_a = smol;
	temp->cost_b = the_r_binar[pos_in_ar];
}

static void	assign_least_moves(int a_size, int b_size, t_stack *temp)
{
	int	sng_stc_mvs[4];
	int	possible_combs[4];

	sng_stc_mvs[0] = temp->target_pos - 1;
	sng_stc_mvs[1] = a_size - temp->target_pos + 1;
	sng_stc_mvs[2] = temp->current_pos - 1;
	sng_stc_mvs[3] = b_size - temp->current_pos + 1;
	possible_combs[0] = same_moves(sng_stc_mvs[0], sng_stc_mvs[2]);
	possible_combs[1] = sng_stc_mvs[0] + sng_stc_mvs[3];
	possible_combs[2] = same_moves(sng_stc_mvs[1], sng_stc_mvs[3]);
	possible_combs[3] = sng_stc_mvs[1] + sng_stc_mvs[2];
	moves_to_node(temp, possible_combs);
}	

void	calculate_moves(t_stack *a_stack, t_stack *b_stack)
{
	int		a_current_size;
	int		b_current_size;
	t_stack	*temp;

	temp = b_stack;
	a_current_size = count_stack(a_stack);
	b_current_size = count_stack(b_stack);
	while (temp)
	{
		if (temp->target_pos != 0)
			assign_least_moves(a_current_size, b_current_size, temp);
		temp = temp->next;
	}
}
