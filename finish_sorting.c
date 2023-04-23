/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   finish_sorting.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npavelic <npavelic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 16:49:37 by npavelic          #+#    #+#             */
/*   Updated: 2023/04/23 18:49:54 by npavelic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

void	a_final_reckoning(t_stack **a_stack, int total)
{
	int		ra_or_rra;
	t_stack	*temp;

	curren_positions (*a_stack);
	temp = *a_stack;
	while (temp->index != 1)
		temp = temp->next;
	if ((temp->current_pos + 1) <= (total / 2))
		ra_or_rra = 1;
	else
		ra_or_rra = 2;
	while ((*a_stack)->index != 1)
	{
		if (ra_or_rra == 1)
			rotate_a (a_stack);
		if (ra_or_rra == 2)
			rev_rotate_a (a_stack);
	}

}
