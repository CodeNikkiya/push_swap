/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npavelic <npavelic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 22:56:34 by npavelic          #+#    #+#             */
/*   Updated: 2023/04/08 12:27:18 by npavelic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"



void	testit(t_stack *stako, t_stack *stako2)
{
	printf("%s\n", "____________________________________________");
	while (stako || stako2)
	{
		if (stako)
			printf("%i\t", stako->content);
		else
			printf("X\t");
		printf("\t\t\t");
		if (stako2)
			printf("%i", stako2->content);
		else
			printf("X");
		printf("\n");
		if (stako)
			stako = stako->next;
		if (stako2)
			stako2 = stako2->next;
	}
	printf("%s\n", "____________________________________________");
}


int	main(int argc, char **argv)
{
	t_stack	*b_stack;
	t_stack	*a_stack;

	if (that_aint_right(argc, argv))
		return (1);
	fill_stack(argc, argv, &a_stack);
	b_stack = NULL;
	testit (a_stack, b_stack);
	swap_a(a_stack);
	testit (a_stack, b_stack);
	push_to_b(&a_stack, &b_stack);
	testit (a_stack, b_stack);
	push_to_b(&a_stack, &b_stack);
	testit (a_stack, b_stack);
	swap_s(a_stack, b_stack);
	testit (a_stack, b_stack);
	push_to_a(&b_stack, &a_stack);
	testit (a_stack, b_stack);
	return (0);
}
