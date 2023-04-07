/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npavelic <npavelic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 22:56:34 by npavelic          #+#    #+#             */
/*   Updated: 2023/04/07 19:30:49 by npavelic         ###   ########.fr       */
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

void	testit(t_stack *stako)
{
	while (stako)
	{
		printf("%i\n",stako->content);
		stako = stako->next;
	}
	printf("%s\n","___________");
}

int	main(int argc, char **argv)
{
	t_stack	*b_stack;
	t_stack	*a_stack;

	if (that_aint_right(argc, argv))
		return (1);
	fill_stack(argc, argv, &a_stack);
	b_stack = NULL;
	testit (a_stack);
	return (0);
}
