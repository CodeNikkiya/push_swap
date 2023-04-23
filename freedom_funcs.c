/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   freedom_funcs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npavelic <npavelic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 18:32:25 by npavelic          #+#    #+#             */
/*   Updated: 2023/04/23 19:46:24 by npavelic         ###   ########.fr       */
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
206 175 228 91 126 61 224 109 111 139 33 34 252 264 288 73 4 233 123 236 213 26 53 40 142 170 176 20 275 52 116 207 133 188 23 154 82 21 258 185 43 196 127 254 100 11 268 289 159 269 7 291 292 232 56 186 63 180 84 199 293 194 250 204 97 136 110 155 257 22 37 46 48 64 120 106 113 174 50 158 115 212 72 93 221 279 276 235 227 230 274 45 5