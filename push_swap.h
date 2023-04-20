/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npavelic <npavelic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 13:45:14 by npavelic          #+#    #+#             */
/*   Updated: 2023/04/20 20:38:43 by npavelic         ###   ########.fr       */
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
	int				index;
	int				current_pos;
	int				target_pos;
	int				cost_a;
	int				cost_b;
	struct s_stack	*next;
}	t_stack;

int		that_aint_right(int argc, char **argv);
int		arg_is_wrong(char *arg);
void	fill_stack(int argc, char **argv, t_stack **stako);
void	swap_a(t_stack *stack);
void	swap_b(t_stack *stack);
void	swap_s(t_stack *stack_a, t_stack *stack_b);
void	push_to_a(t_stack **b_stack, t_stack **a_stack);
void	push_to_b(t_stack **a_stack, t_stack **b_stack);
void	rotate_a(t_stack **a_stack);
void	rotate_b(t_stack **b_stack);
void	rotate_two(t_stack **a_stack, t_stack **b_stack);
void	rev_rotate_a(t_stack **a_stack);
void	rev_rotate_b(t_stack **b_stack);
void	rev_rot_two(t_stack **a_stack, t_stack **b_stack);
void	destroy_str_arr(char **string_arr);
int		single_arg_but_valid(char *str);
void	handle_single_arg(char *str, t_stack **stack);

#endif