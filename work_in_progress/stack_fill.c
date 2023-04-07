/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npavelic <npavelic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 16:49:37 by npavelic          #+#    #+#             */
/*   Updated: 2023/04/07 19:36:13 by npavelic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

static int	isnt_valid_int(char *arg)
{
	int	i;
	int	has_sign;

	i = 0;
	has_sign = 0;
	if (arg[i] == '+' || arg[i] == '-')
	{
		has_sign = 1;
		i++;
	}
	while (arg[i])
	{
		if (!ft_isdigit(arg[i]))
			return (1);
		i++;
	}
	if (has_sign && i == 1)
		return (1);
	return (0);
}
