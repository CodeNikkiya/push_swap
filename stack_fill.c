/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npavelic <npavelic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 22:56:34 by npavelic          #+#    #+#             */
/*   Updated: 2023/04/07 19:52:18 by npavelic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"


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
		value = atoi(argv[i]);
		node = malloc(sizeof(t_stack));
		node->content = value;
		node->next = prev;
		prev = node;
	}
	*stako = prev;
}