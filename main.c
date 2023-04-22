/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npavelic <npavelic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 22:56:34 by npavelic          #+#    #+#             */
/*   Updated: 2023/04/22 11:31:13 by npavelic         ###   ########.fr       */
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

		// stako->index = 0;
		// stako->current_pos = i - 1;
		// stako->target_pos = 0;
		// stako->cost_a = 0;
		// stako->cost_b = 0;

void	second_tester(t_stack *stako)
{
	printf("%s\n", "____________________________________________");
	while (stako)
	{
		printf("%i\t%i\t%i\t%i\t%i\t%i\n", stako->content, stako->index, stako->current_pos, stako->target_pos, stako->cost_a, stako->cost_b);
		stako = stako->next;
	}
	printf("%s\n", "____________________________________________");
}


/*
	testit (a_stack, b_stack);
	swap_a(a_stack);
	testit (a_stack, b_stack);
	push_to_b(&a_stack, &b_stack);
	testit (a_stack, b_stack);
	push_to_b(&a_stack, &b_stack);
	testit (a_stack, b_stack);
	swap_s(a_stack, b_stack);
	testit (a_stack, b_stack);
	rotate_two(&b_stack, &a_stack);
	testit (a_stack, b_stack);
	rotate_a (&a_stack);
	testit (a_stack, b_stack);
	rotate_b (&b_stack);
	testit (a_stack, b_stack);
	rev_rotate_a (&a_stack);
	testit (a_stack, b_stack);
	rev_rot_two (&b_stack, &a_stack);
	testit (a_stack, b_stack);
	rev_rotate_b (&b_stack);
	testit (a_stack, b_stack);

*/

int	main(int argc, char **argv)
{
	t_stack	*b_stack;
	t_stack	*a_stack;

	if ((argc == 2) && single_arg_but_valid (argv[1]))
		handle_single_arg(argv[1], &a_stack);
	else if (that_aint_right(argc, argv))
		return (1);
	else
		fill_stack(argc, argv, &a_stack);
	b_stack = NULL;
	second_tester (a_stack);
	do_sorting(count_stack(a_stack), &a_stack, &b_stack);
	second_tester (a_stack);
	second_tester (b_stack);
	return (0);
}
