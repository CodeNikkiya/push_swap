/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npavelic <npavelic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 22:56:34 by npavelic          #+#    #+#             */
/*   Updated: 2023/04/27 20:18:38 by npavelic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

// void	testit(t_stack *stako, t_stack *stako2)
// {
// 	printf("%s\n", "____________________________________________");
// 	while (stako || stako2)
// 	{
// 		if (stako)
// 			printf("%i\t", stako->content);
// 		else
// 			printf("X\t");
// 		printf("\t\t\t");
// 		if (stako2)
// 			printf("%i", stako2->content);
// 		else
// 			printf("X");
// 		printf("\n");
// 		if (stako)
// 			stako = stako->next;
// 		if (stako2)
// 			stako2 = stako2->next;
// 	}
// 	printf("%s\n", "____________________________________________");
// }

// 		// stako->index = 0;
// 		// stako->current_pos = i - 1;
// 		// stako->target_pos = 0;
// 		// stako->cost_a = 0;
// 		// stako->cost_b = 0;

// void	second_tester(t_stack *stako)
// {
// 	printf("%s\n", "____________________________________________");
// 	while (stako)
// 	{
// 		printf("%i\t%i\t%i\t%i\t%i\t%i\n", stako->content,
// 			stako->index, stako->current_pos, stako->target_pos,
// 			stako->cost_a, stako->cost_b);
// 		stako = stako->next;
// 	}
// 	printf("%s\n", "____________________________________________");
// }

int	main(int argc, char **argv)
{
	t_stack	*b_stack;
	t_stack	*a_stack;

	if (argc == 1)
		return (0);
	if ((argc == 2) && single_arg_but_valid (argv[1]))
		handle_single_arg(argv[1], &a_stack);
	else if (that_aint_right(argc, argv))
		return (1);
	else
		fill_stack(argc, argv, &a_stack);
	b_stack = NULL;
	do_sorting(count_stack(a_stack), &a_stack, &b_stack);
	destroy_linked_list(a_stack);
	return (0);
}
