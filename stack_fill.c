/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npavelic <npavelic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 22:56:34 by npavelic          #+#    #+#             */
/*   Updated: 2023/04/20 22:48:39 by npavelic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"



static void	indexing(t_stack **node)
{
	t_stack	*temp;
	t_stack	*check;
	int		smaller_nums;

	temp = *node;
	smaller_nums = 0;
	while (temp)
	{
		check = *node;
		while (check)
		{
			if (temp->content > check->content)
				smaller_nums++;
			check = check->next;
		}
		temp->index = smaller_nums;
		printf ("%i\n", temp->index);
		smaller_nums = 0;
		temp = temp->next;
	}
}

void	fill_stack(int argc, char **argv, t_stack **stako)
{
	int		i;
	int		value;
	t_stack	*node;
	t_stack	*prev;

	prev = NULL;
	i = argc;
	while (--i > 0)
	{
		value = ft_atoi(argv[i]);
		node = malloc(sizeof(t_stack));
		node->content = value;
		node->index = 0;
		node->current_pos = i - 1;
		node->target_pos = 0;
		node->cost_a = 0;
		node->cost_b = 0;
		node->next = prev;
		prev = node;
	}
	indexing(&prev);
	*stako = prev;
}
