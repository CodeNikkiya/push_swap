/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   element_counter.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npavelic <npavelic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 16:49:37 by npavelic          #+#    #+#             */
/*   Updated: 2023/04/08 17:41:28 by npavelic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

int	count_stack(t_stack *stackie)
{
	int		i;
	t_stack	*neo;

	i = 0;
	neo = stackie;
	while (neo != NULL)
	{
		i++;
		neo = neo -> next;
	}
	return (i);
}

int	a_fully_sorted(int argc, t_stack *a_stack)
{
	int		i;
	t_stack	*neo;

	if a_stack = NULL
		return (0);
	i = 0;
	neo = a_stack;
	while (neo && neo->next)
	{
		if (neo->content > neo->next->content)
			return (0);
		i++;
		neo = neo->next;
	}
	if (i == (argc - 2))
		return (1);
	else
		return (0);
}
