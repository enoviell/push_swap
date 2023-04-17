/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enoviell <enoviell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 13:29:30 by enoviell          #+#    #+#             */
/*   Updated: 2023/04/05 13:20:46 by enoviell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_three(t_stack *stack)
{
	int	a;
	int	b;
	int	c;

	a = stack->a[0];
	b = stack->a[1];
	c = stack->a[2];
	if (a > b && b < c && c > a)
		stack->n_moves += sa(stack, 1);
	else if (a > b && b > c && c < a)
	{
		stack->n_moves += sa(stack, 1);
		stack->n_moves += rra(stack, 1);
	}
	else if (a > b && b < c && c < a)
		stack->n_moves += ra(stack, 1);
	else if (a < b && b > c && c > a)
	{
		stack->n_moves += sa(stack, 1);
		stack->n_moves += ra(stack, 1);
	}
	else if (a < b && b > c && c < a)
		stack->n_moves += rra(stack, 1);
}
