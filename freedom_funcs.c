/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   freedom_funcs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npavelic <npavelic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 18:32:25 by npavelic          #+#    #+#             */
/*   Updated: 2023/04/25 18:47:18 by npavelic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

void	destroy_str_arr(char **string_arr)
{
	int	i;

	i = 0;
	while (string_arr[i] != NULL)
	{
		free(string_arr[i]);
		i++;
	}
	free(string_arr);
}

void	destroy_linked_list(t_stack *string_arr)
{
	t_stack	*temp;

	while (string_arr)
	{
		temp = string_arr->next;
		free(string_arr);
		string_arr = temp;
	}
}
