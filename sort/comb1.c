/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comb1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enoviell <enoviell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 13:30:48 by enoviell          #+#    #+#             */
/*   Updated: 2023/04/05 13:20:46 by enoviell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	comb1_1(t_stack *stack, int i, int j)
{
	int	k;

	k = 0;
	while (k < i)
	{
		stack->n_moves += rr(stack, 1);
		k++;
	}
	k = 0;
	while (k < (j - i))
	{
		stack->n_moves += rb(stack, 1);
		k++;
	}
	stack->n_moves += pb(stack, 1);
	return ;
}

void	comb1_2(t_stack *stack, int i, int j)
{
	int	k;

	k = 0;
	while (k < j)
	{
		stack->n_moves += rr(stack, 1);
		k++;
	}
	k = 0;
	while (k < (i - j))
	{
		stack->n_moves += ra(stack, 1);
		k++;
	}
	stack->n_moves += pb(stack, 1);
	return ;
}
