/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comb4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enoviell <enoviell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 13:39:05 by enoviell          #+#    #+#             */
/*   Updated: 2023/04/05 13:20:46 by enoviell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	comb4_1(t_stack *stack, int i, int j)
{
	int	k;

	k = 0;
	while (k <= (stack->last_a - i))
	{
		stack->n_moves += rrr(stack, 1);
		k++;
	}
	k = 0;
	while (k < (stack->last_b - j) - (stack->last_a - i))
	{
		stack->n_moves += rrb(stack, 1);
		k++;
	}
	stack->n_moves += pb(stack, 1);
	return ;
}

void	comb4_2(t_stack *stack, int i, int j)
{
	int	k;

	k = 0;
	while (k <= (stack->last_b - j))
	{
		stack->n_moves += rrr(stack, 1);
		k++;
	}
	k = 0;
	while (k < (stack->last_a - i) - (stack->last_b - j))
	{
		stack->n_moves += rra(stack, 1);
		k++;
	}
	stack->n_moves += pb(stack, 1);
	return ;
}
