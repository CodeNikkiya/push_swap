/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npavelic <npavelic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 13:45:14 by npavelic          #+#    #+#             */
/*   Updated: 2023/04/08 15:09:20 by npavelic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_stack
{
	int				content;
	struct s_stack	*next;
}	t_stack;

int		that_aint_right(int argc, char **argv);
void	fill_stack(int argc, char **argv, t_stack **stako);
void	swap_a(t_stack *stack);
void	swap_b(t_stack *stack);
void	swap_s(t_stack *stack_a, t_stack *stack_b);
void	push_to_a(t_stack **b_stack, t_stack **a_stack);
void	push_to_b(t_stack **a_stack, t_stack **b_stack);
void	rotate_a(t_stack **a_stack);
void	rotate_b(t_stack **b_stack);
void	rotate_two(t_stack **a_stack, t_stack **b_stack);
void	rev_rotate_a(t_stack **a_stack)

void	rev_rotate_b(t_stack **b_stack)
{
	rev_rot(b_stack);
	write (1, "rrb\n", 4);
}

void	rev_rot_two(t_stack **a_stack, t_stack **b_stack)


#endif