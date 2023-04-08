/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_validate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npavelic <npavelic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 16:49:37 by npavelic          #+#    #+#             */
/*   Updated: 2023/04/08 15:18:13 by npavelic         ###   ########.fr       */
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

static int	arg_is_wrong(char *arg)
{
	if (arg[0] == '\0' || isnt_valid_int(arg))
		return (1);
	if (ft_strlen(arg) > 10 && (arg[0] != '-') && (arg[0] != '+'))
		return (1);
	if (ft_strlen(arg) > 11)
		return (1);
	if (ft_strlen(arg) == 10 && ft_strncmp(arg, "2147483647", 10) > 0)
		return (1);
	if (ft_strlen(arg) == 11 && arg[0] == '-')
	{
		if (ft_strncmp(arg + 1, "2147483648", 10) > 0)
			return (1);
	}
	if (ft_strlen(arg) == 11 && arg[0] == '+')
	{
		if (ft_strncmp(arg + 1, "2147483647", 10) > 0)
			return (1);
	}
	if (arg[0] == '0' && ft_strlen(arg) > 1)
		return (1);
	return (0);
}

static int	there_r_doubles(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc < 3)
		return (0);
	i = 0;
	while (++i < (argc - 1))
	{
		j = i;
		while (++j < (argc))
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
				return (1);
		}
	}
	return (0);
}

int	that_aint_right(int argc, char **argv)
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
		if (arg_is_wrong(argv[i]))
		{
			write (1, "Error\n", 6);
			return (1);
		}
	}
	if (there_r_doubles(argc, argv))
	{
		write (1, "Error\n", 6);
		return (1);
	}
	return (0);
}
