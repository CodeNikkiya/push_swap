/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_single.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npavelic <npavelic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 16:49:37 by npavelic          #+#    #+#             */
/*   Updated: 2023/04/09 22:13:10 by npavelic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"


/*
int	array_aint_right(int argc, char **array)
{
	int	i;

	i = 0;
	if (argc <= 1)
	{
		write (1, "Error\n", 6);
		return (1);
	}
	while (++i < argc)
	{
		if (arg_is_wrong(array[i]))
		{
			write (1, "Error\n", 6);
			return (1);
		}
	}
	if (there_r_doubles(argc, array))
	{
		write (1, "Error\n", 6);
		return (1);
	}
	return (0);
}
*/

static int	array_has_doubles(char **array)
{
	int	i;
	int	j;

	i = 0;
	while (array[i])
	{
		j = i + 1;
		while (array[j])
		{
			if (ft_atoi(array[i]) == ft_atoi(array[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}


int	single_arg_but_valid(char *str)
{
	int		i;
	char	**array;

	if (!arg_is_wrong(str))
		return (1);
	array = ft_split (str, ' ');
	if (array == NULL)
		return (0);
	i = 0;
	while (array[i])
	{
		if (arg_is_wrong(array[i++]))
		{
			destroy_str_arr(array);
			return (0);
		}
	}
	if (array_has_doubles(array))
	{
		destroy_str_arr(array);
		return (0);
	}
	return (1);
}


// void	handle_single_arg(char *str, t_stack **stack)
// {
// 	int		i;
// 	int		value;
// 	char	**array;
// 	t_stack	*node;
// 	t_stack	*prev;

// 	prev = NULL;
// 	array = ft_split(str, ' ');
// 	if (array == NULL)
// 		exit(1);
// 	i = 0;
// 	while (array[i])
// 		i++;
// 	while (i > -1)
// 	{
// 		value = ft_atoi(array[i]);
// 		node = malloc(sizeof(t_stack));
// 		node->content = value;
// 		node->next = prev;
// 		prev = node;
// 	}
// 	destroy_str_arr(array);
// 	*stack = prev;
// }

// void	handle_single_arg(char *str, t_stack **stack)
// {
// 	int		i;
// 	int		value;
// 	char	**array;
// 	t_stack	*node;
// 	t_stack	*prev;

// 	prev = NULL;
// 	array = ft_split(str, ' ');
// 	if (array == NULL)
// 		exit(1);
// 	i = 0;
// 	while (array[i])
// 		i++;
// 	while (--i >= 0)
// 	{
// 		value = ft_atoi(array[i]);
// 		node = malloc(sizeof(t_stack));
// 		node->content = value;
// 		node->next = prev;
// 		prev = node;
// 	}
// 	*stack = prev;
// 	destroy_str_arr(array);
// }


void	handle_single_arg(char *str, t_stack **stack)
{
	int		i;
	int		value;
	char	**array;
	t_stack	*node;
	t_stack	*prev;

	prev = NULL;
	array = ft_split(str, ' ');
	if (array == NULL)
		exit(1);
	i = 0;
	while (array [i])
		i++;
	while (--i > -1)
	{
		value = ft_atoi(array[i]);
		node = malloc(sizeof(t_stack));
		node->content = value;
		node->next = prev;
		prev = node;
	}
	*stack = prev;
	destroy_str_arr(array);
}


	// while (array[i])
	// 	i++;
	// while (--i >= 0)
	// {
	// 	value = atoi(array[i]);
	// 	node = malloc(sizeof(t_stack));
	// 	node->content = value;
	// 	node->next = prev;
	// 	prev = node;
	// }
	// destroy_str_arr(array);
	// *stack = prev;
